#define BRKa() { __current_seg->add_statement("brk", "imp", 0); }
#define ORAizx(_val) { __current_seg->add_statement("ora", "izx", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define SLOizx(_val) { __current_seg->add_statement("slo", "izx", _val); }
#define NOPz(_val) { __current_seg->add_statement("nop", "zp", _val); }
#define ORAz(_val) { __current_seg->add_statement("ora", "zp", _val); }
#define ASLz(_val) { __current_seg->add_statement("asl", "zp", _val); }
#define SLOz(_val) { __current_seg->add_statement("slo", "zp", _val); }
#define PHPa() { __current_seg->add_statement("php", "imp", 0); }
#define ORAi(_val) { __current_seg->add_statement("ora", "imm", _val); }
#define ASLa() { __current_seg->add_statement("asl", "imp", 0); }
#define ANCi(_val) { __current_seg->add_statement("anc", "imm", _val); }
#define NOP(_val) { __current_seg->add_statement("nop", "abs", _val); }
#define ORA(_val) { __current_seg->add_statement("ora", "abs", _val); }
#define ASL(_val) { __current_seg->add_statement("asl", "abs", _val); }
#define SLO(_val) { __current_seg->add_statement("slo", "abs", _val); }
#define BPL(_val) { __current_seg->add_statement("bpl", "rel", _val); }
#define ORAizy(_val) { __current_seg->add_statement("ora", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define SLOizy(_val) { __current_seg->add_statement("slo", "izy", _val); }
#define NOPzx(_val) { __current_seg->add_statement("nop", "zpx", _val); }
#define ORAzx(_val) { __current_seg->add_statement("ora", "zpx", _val); }
#define ASLzx(_val) { __current_seg->add_statement("asl", "zpx", _val); }
#define SLOzx(_val) { __current_seg->add_statement("slo", "zpx", _val); }
#define CLCa() { __current_seg->add_statement("clc", "imp", 0); }
#define ORAy(_val) { __current_seg->add_statement("ora", "aby", _val); }
#define NOPa() { __current_seg->add_statement("nop", "imp", 0); }
#define SLOy(_val) { __current_seg->add_statement("slo", "aby", _val); }
#define NOPx(_val) { __current_seg->add_statement("nop", "abx", _val); }
#define ORAx(_val) { __current_seg->add_statement("ora", "abx", _val); }
#define ASLx(_val) { __current_seg->add_statement("asl", "abx", _val); }
#define SLOx(_val) { __current_seg->add_statement("slo", "abx", _val); }
#define JSR(_val) { __current_seg->add_statement("jsr", "abs", _val); }
#define ANDizx(_val) { __current_seg->add_statement("and", "izx", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define RLAizx(_val) { __current_seg->add_statement("rla", "izx", _val); }
#define BITz(_val) { __current_seg->add_statement("bit", "zp", _val); }
#define ANDz(_val) { __current_seg->add_statement("and", "zp", _val); }
#define ROLz(_val) { __current_seg->add_statement("rol", "zp", _val); }
#define RLAz(_val) { __current_seg->add_statement("rla", "zp", _val); }
#define PLPa() { __current_seg->add_statement("plp", "imp", 0); }
#define ANDi(_val) { __current_seg->add_statement("and", "imm", _val); }
#define ROLa() { __current_seg->add_statement("rol", "imp", 0); }
#define ANCi(_val) { __current_seg->add_statement("anc", "imm", _val); }
#define BIT(_val) { __current_seg->add_statement("bit", "abs", _val); }
#define AND(_val) { __current_seg->add_statement("and", "abs", _val); }
#define ROL(_val) { __current_seg->add_statement("rol", "abs", _val); }
#define RLA(_val) { __current_seg->add_statement("rla", "abs", _val); }
#define BMI(_val) { __current_seg->add_statement("bmi", "rel", _val); }
#define ANDizy(_val) { __current_seg->add_statement("and", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define RLAizy(_val) { __current_seg->add_statement("rla", "izy", _val); }
#define NOPzx(_val) { __current_seg->add_statement("nop", "zpx", _val); }
#define ANDzx(_val) { __current_seg->add_statement("and", "zpx", _val); }
#define ROLzx(_val) { __current_seg->add_statement("rol", "zpx", _val); }
#define RLAzx(_val) { __current_seg->add_statement("rla", "zpx", _val); }
#define SECa() { __current_seg->add_statement("sec", "imp", 0); }
#define ANDy(_val) { __current_seg->add_statement("and", "aby", _val); }
#define NOPa() { __current_seg->add_statement("nop", "imp", 0); }
#define RLAy(_val) { __current_seg->add_statement("rla", "aby", _val); }
#define NOPx(_val) { __current_seg->add_statement("nop", "abx", _val); }
#define ANDx(_val) { __current_seg->add_statement("and", "abx", _val); }
#define ROLx(_val) { __current_seg->add_statement("rol", "abx", _val); }
#define RLAx(_val) { __current_seg->add_statement("rla", "abx", _val); }
#define RTIa() { __current_seg->add_statement("rti", "imp", 0); }
#define EORizx(_val) { __current_seg->add_statement("eor", "izx", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define SREizx(_val) { __current_seg->add_statement("sre", "izx", _val); }
#define NOPz(_val) { __current_seg->add_statement("nop", "zp", _val); }
#define EORz(_val) { __current_seg->add_statement("eor", "zp", _val); }
#define LSRz(_val) { __current_seg->add_statement("lsr", "zp", _val); }
#define SREz(_val) { __current_seg->add_statement("sre", "zp", _val); }
#define PHAa() { __current_seg->add_statement("pha", "imp", 0); }
#define EORi(_val) { __current_seg->add_statement("eor", "imm", _val); }
#define LSRa() { __current_seg->add_statement("lsr", "imp", 0); }
#define ALRi(_val) { __current_seg->add_statement("alr", "imm", _val); }
#define JMP(_val) { __current_seg->add_statement("jmp", "abs", _val); }
#define EOR(_val) { __current_seg->add_statement("eor", "abs", _val); }
#define LSR(_val) { __current_seg->add_statement("lsr", "abs", _val); }
#define SRE(_val) { __current_seg->add_statement("sre", "abs", _val); }
#define BVC(_val) { __current_seg->add_statement("bvc", "rel", _val); }
#define EORizy(_val) { __current_seg->add_statement("eor", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define SREizy(_val) { __current_seg->add_statement("sre", "izy", _val); }
#define NOPzx(_val) { __current_seg->add_statement("nop", "zpx", _val); }
#define EORzx(_val) { __current_seg->add_statement("eor", "zpx", _val); }
#define LSRzx(_val) { __current_seg->add_statement("lsr", "zpx", _val); }
#define SREzx(_val) { __current_seg->add_statement("sre", "zpx", _val); }
#define CLIa() { __current_seg->add_statement("cli", "imp", 0); }
#define EORy(_val) { __current_seg->add_statement("eor", "aby", _val); }
#define NOPa() { __current_seg->add_statement("nop", "imp", 0); }
#define SREy(_val) { __current_seg->add_statement("sre", "aby", _val); }
#define NOPx(_val) { __current_seg->add_statement("nop", "abx", _val); }
#define EORx(_val) { __current_seg->add_statement("eor", "abx", _val); }
#define LSRx(_val) { __current_seg->add_statement("lsr", "abx", _val); }
#define SREx(_val) { __current_seg->add_statement("sre", "abx", _val); }
#define RTSa() { __current_seg->add_statement("rts", "imp", 0); }
#define ADCizx(_val) { __current_seg->add_statement("adc", "izx", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define RRAizx(_val) { __current_seg->add_statement("rra", "izx", _val); }
#define NOPz(_val) { __current_seg->add_statement("nop", "zp", _val); }
#define ADCz(_val) { __current_seg->add_statement("adc", "zp", _val); }
#define RORz(_val) { __current_seg->add_statement("ror", "zp", _val); }
#define RRAz(_val) { __current_seg->add_statement("rra", "zp", _val); }
#define PLAa() { __current_seg->add_statement("pla", "imp", 0); }
#define ADCi(_val) { __current_seg->add_statement("adc", "imm", _val); }
#define RORa() { __current_seg->add_statement("ror", "imp", 0); }
#define ARRi(_val) { __current_seg->add_statement("arr", "imm", _val); }
#define JMPi(_val) { __current_seg->add_statement("jmp", "ind", _val); }
#define ADC(_val) { __current_seg->add_statement("adc", "abs", _val); }
#define ROR(_val) { __current_seg->add_statement("ror", "abs", _val); }
#define RRA(_val) { __current_seg->add_statement("rra", "abs", _val); }
#define BVS(_val) { __current_seg->add_statement("bvs", "rel", _val); }
#define ADCizy(_val) { __current_seg->add_statement("adc", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define RRAizy(_val) { __current_seg->add_statement("rra", "izy", _val); }
#define NOPzx(_val) { __current_seg->add_statement("nop", "zpx", _val); }
#define ADCzx(_val) { __current_seg->add_statement("adc", "zpx", _val); }
#define RORzx(_val) { __current_seg->add_statement("ror", "zpx", _val); }
#define RRAzx(_val) { __current_seg->add_statement("rra", "zpx", _val); }
#define SEIa() { __current_seg->add_statement("sei", "imp", 0); }
#define ADCy(_val) { __current_seg->add_statement("adc", "aby", _val); }
#define NOPa() { __current_seg->add_statement("nop", "imp", 0); }
#define RRAy(_val) { __current_seg->add_statement("rra", "aby", _val); }
#define NOPx(_val) { __current_seg->add_statement("nop", "abx", _val); }
#define ADCx(_val) { __current_seg->add_statement("adc", "abx", _val); }
#define RORx(_val) { __current_seg->add_statement("ror", "abx", _val); }
#define RRAx(_val) { __current_seg->add_statement("rra", "abx", _val); }
#define NOPi(_val) { __current_seg->add_statement("nop", "imm", _val); }
#define STAizx(_val) { __current_seg->add_statement("sta", "izx", _val); }
#define NOPi(_val) { __current_seg->add_statement("nop", "imm", _val); }
#define SAXizx(_val) { __current_seg->add_statement("sax", "izx", _val); }
#define STYz(_val) { __current_seg->add_statement("sty", "zp", _val); }
#define STAz(_val) { __current_seg->add_statement("sta", "zp", _val); }
#define STXz(_val) { __current_seg->add_statement("stx", "zp", _val); }
#define SAXz(_val) { __current_seg->add_statement("sax", "zp", _val); }
#define DEYa() { __current_seg->add_statement("dey", "imp", 0); }
#define NOPi(_val) { __current_seg->add_statement("nop", "imm", _val); }
#define TXAa() { __current_seg->add_statement("txa", "imp", 0); }
#define XAAi(_val) { __current_seg->add_statement("xaa", "imm", _val); }
#define STY(_val) { __current_seg->add_statement("sty", "abs", _val); }
#define STA(_val) { __current_seg->add_statement("sta", "abs", _val); }
#define STX(_val) { __current_seg->add_statement("stx", "abs", _val); }
#define SAX(_val) { __current_seg->add_statement("sax", "abs", _val); }
#define BCC(_val) { __current_seg->add_statement("bcc", "rel", _val); }
#define STAizy(_val) { __current_seg->add_statement("sta", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define AHXizy(_val) { __current_seg->add_statement("ahx", "izy", _val); }
#define STYzx(_val) { __current_seg->add_statement("sty", "zpx", _val); }
#define STAzx(_val) { __current_seg->add_statement("sta", "zpx", _val); }
#define STXzy(_val) { __current_seg->add_statement("stx", "zpy", _val); }
#define SAXzy(_val) { __current_seg->add_statement("sax", "zpy", _val); }
#define TYAa() { __current_seg->add_statement("tya", "imp", 0); }
#define STAy(_val) { __current_seg->add_statement("sta", "aby", _val); }
#define TXSa() { __current_seg->add_statement("txs", "imp", 0); }
#define TASy(_val) { __current_seg->add_statement("tas", "aby", _val); }
#define SHYx(_val) { __current_seg->add_statement("shy", "abx", _val); }
#define STAx(_val) { __current_seg->add_statement("sta", "abx", _val); }
#define SHXy(_val) { __current_seg->add_statement("shx", "aby", _val); }
#define AHXy(_val) { __current_seg->add_statement("ahx", "aby", _val); }
#define LDYi(_val) { __current_seg->add_statement("ldy", "imm", _val); }
#define LDAizx(_val) { __current_seg->add_statement("lda", "izx", _val); }
#define LDXi(_val) { __current_seg->add_statement("ldx", "imm", _val); }
#define LAXizx(_val) { __current_seg->add_statement("lax", "izx", _val); }
#define LDYz(_val) { __current_seg->add_statement("ldy", "zp", _val); }
#define LDAz(_val) { __current_seg->add_statement("lda", "zp", _val); }
#define LDXz(_val) { __current_seg->add_statement("ldx", "zp", _val); }
#define LAXz(_val) { __current_seg->add_statement("lax", "zp", _val); }
#define TAYa() { __current_seg->add_statement("tay", "imp", 0); }
#define LDAi(_val) { __current_seg->add_statement("lda", "imm", _val); }
#define TAXa() { __current_seg->add_statement("tax", "imp", 0); }
#define LAXi(_val) { __current_seg->add_statement("lax", "imm", _val); }
#define LDY(_val) { __current_seg->add_statement("ldy", "abs", _val); }
#define LDA(_val) { __current_seg->add_statement("lda", "abs", _val); }
#define LDX(_val) { __current_seg->add_statement("ldx", "abs", _val); }
#define LAX(_val) { __current_seg->add_statement("lax", "abs", _val); }
#define BCS(_val) { __current_seg->add_statement("bcs", "rel", _val); }
#define LDAizy(_val) { __current_seg->add_statement("lda", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define LAXizy(_val) { __current_seg->add_statement("lax", "izy", _val); }
#define LDYzx(_val) { __current_seg->add_statement("ldy", "zpx", _val); }
#define LDAzx(_val) { __current_seg->add_statement("lda", "zpx", _val); }
#define LDXzy(_val) { __current_seg->add_statement("ldx", "zpy", _val); }
#define LAXzy(_val) { __current_seg->add_statement("lax", "zpy", _val); }
#define CLVa() { __current_seg->add_statement("clv", "imp", 0); }
#define LDAy(_val) { __current_seg->add_statement("lda", "aby", _val); }
#define TSXa() { __current_seg->add_statement("tsx", "imp", 0); }
#define LASy(_val) { __current_seg->add_statement("las", "aby", _val); }
#define LDYx(_val) { __current_seg->add_statement("ldy", "abx", _val); }
#define LDAx(_val) { __current_seg->add_statement("lda", "abx", _val); }
#define LDXy(_val) { __current_seg->add_statement("ldx", "aby", _val); }
#define LAXy(_val) { __current_seg->add_statement("lax", "aby", _val); }
#define CPYi(_val) { __current_seg->add_statement("cpy", "imm", _val); }
#define CMPizx(_val) { __current_seg->add_statement("cmp", "izx", _val); }
#define NOPi(_val) { __current_seg->add_statement("nop", "imm", _val); }
#define DCPizx(_val) { __current_seg->add_statement("dcp", "izx", _val); }
#define CPYz(_val) { __current_seg->add_statement("cpy", "zp", _val); }
#define CMPz(_val) { __current_seg->add_statement("cmp", "zp", _val); }
#define DECz(_val) { __current_seg->add_statement("dec", "zp", _val); }
#define DCPz(_val) { __current_seg->add_statement("dcp", "zp", _val); }
#define INYa() { __current_seg->add_statement("iny", "imp", 0); }
#define CMPi(_val) { __current_seg->add_statement("cmp", "imm", _val); }
#define DEXa() { __current_seg->add_statement("dex", "imp", 0); }
#define AXSi(_val) { __current_seg->add_statement("axs", "imm", _val); }
#define CPY(_val) { __current_seg->add_statement("cpy", "abs", _val); }
#define CMP(_val) { __current_seg->add_statement("cmp", "abs", _val); }
#define DEC(_val) { __current_seg->add_statement("dec", "abs", _val); }
#define DCP(_val) { __current_seg->add_statement("dcp", "abs", _val); }
#define BNE(_val) { __current_seg->add_statement("bne", "rel", _val); }
#define CMPizy(_val) { __current_seg->add_statement("cmp", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define DCPizy(_val) { __current_seg->add_statement("dcp", "izy", _val); }
#define NOPzx(_val) { __current_seg->add_statement("nop", "zpx", _val); }
#define CMPzx(_val) { __current_seg->add_statement("cmp", "zpx", _val); }
#define DECzx(_val) { __current_seg->add_statement("dec", "zpx", _val); }
#define DCPzx(_val) { __current_seg->add_statement("dcp", "zpx", _val); }
#define CLDa() { __current_seg->add_statement("cld", "imp", 0); }
#define CMPy(_val) { __current_seg->add_statement("cmp", "aby", _val); }
#define NOPa() { __current_seg->add_statement("nop", "imp", 0); }
#define DCPy(_val) { __current_seg->add_statement("dcp", "aby", _val); }
#define NOPx(_val) { __current_seg->add_statement("nop", "abx", _val); }
#define CMPx(_val) { __current_seg->add_statement("cmp", "abx", _val); }
#define DECx(_val) { __current_seg->add_statement("dec", "abx", _val); }
#define DCPx(_val) { __current_seg->add_statement("dcp", "abx", _val); }
#define CPXi(_val) { __current_seg->add_statement("cpx", "imm", _val); }
#define SBCizx(_val) { __current_seg->add_statement("sbc", "izx", _val); }
#define NOPi(_val) { __current_seg->add_statement("nop", "imm", _val); }
#define ISCizx(_val) { __current_seg->add_statement("isc", "izx", _val); }
#define CPXz(_val) { __current_seg->add_statement("cpx", "zp", _val); }
#define SBCz(_val) { __current_seg->add_statement("sbc", "zp", _val); }
#define INCz(_val) { __current_seg->add_statement("inc", "zp", _val); }
#define ISCz(_val) { __current_seg->add_statement("isc", "zp", _val); }
#define INXa() { __current_seg->add_statement("inx", "imp", 0); }
#define SBCi(_val) { __current_seg->add_statement("sbc", "imm", _val); }
#define NOPa() { __current_seg->add_statement("nop", "imp", 0); }
#define SBCi(_val) { __current_seg->add_statement("sbc", "imm", _val); }
#define CPX(_val) { __current_seg->add_statement("cpx", "abs", _val); }
#define SBC(_val) { __current_seg->add_statement("sbc", "abs", _val); }
#define INC(_val) { __current_seg->add_statement("inc", "abs", _val); }
#define ISC(_val) { __current_seg->add_statement("isc", "abs", _val); }
#define BEQ(_val) { __current_seg->add_statement("beq", "rel", _val); }
#define SBCizy(_val) { __current_seg->add_statement("sbc", "izy", _val); }
#define KILa() { __current_seg->add_statement("kil", "imp", 0); }
#define ISCizy(_val) { __current_seg->add_statement("isc", "izy", _val); }
#define NOPzx(_val) { __current_seg->add_statement("nop", "zpx", _val); }
#define SBCzx(_val) { __current_seg->add_statement("sbc", "zpx", _val); }
#define INCzx(_val) { __current_seg->add_statement("inc", "zpx", _val); }
#define ISCzx(_val) { __current_seg->add_statement("isc", "zpx", _val); }
#define SEDa() { __current_seg->add_statement("sed", "imp", 0); }
#define SBCy(_val) { __current_seg->add_statement("sbc", "aby", _val); }
#define NOPa() { __current_seg->add_statement("nop", "imp", 0); }
#define ISCy(_val) { __current_seg->add_statement("isc", "aby", _val); }
#define NOPx(_val) { __current_seg->add_statement("nop", "abx", _val); }
#define SBCx(_val) { __current_seg->add_statement("sbc", "abx", _val); }
#define INCx(_val) { __current_seg->add_statement("inc", "abx", _val); }
#define ISCa() { __current_seg->add_statement("isc", "imp", 0); }
