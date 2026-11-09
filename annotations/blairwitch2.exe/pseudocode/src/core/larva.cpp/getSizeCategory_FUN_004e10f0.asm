; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_larva_cpp_getSizeCategory_FUN_004e10f0(float scale)
;
; Parameters:
; float            Stack[0x4]:4   scale
;
; Referenced Globals:
;   undefined4 DAT_005dbe8e
;   undefined4 DAT_005dbe96
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e10f0
        ;   Label: core_larva.cpp_getSizeCategory_FUN_004e10f0
    MOV EBP,ESP                         ; 004e10f1
    SUB ESP,0x8                         ; 004e10f3
    AND ESP,0xfffffff8                  ; 004e10f6
    FLD float ptr [EBP + 0x8]           ; 004e10f9
    FST double ptr [ESP]                ; 004e10fc
    FCOMP double ptr [0x005dbe8e]       ; 004e10ff | DAT_005dbe8e
    FNSTSW AX                           ; 004e1105
    SAHF                                ; 004e1107
    JC 0x004e1121                       ; 004e1108
        ;   XREF to: 004e1121 (CONDITIONAL_JUMP)  ; LAB_004e1121
    FLD double ptr [ESP]                ; 004e110a
    FCOMP double ptr [0x005dbe96]       ; 004e110d | DAT_005dbe96
    FNSTSW AX                           ; 004e1113
    SAHF                                ; 004e1115
    JNC 0x004e112a                      ; 004e1116
        ;   XREF to: 004e112a (CONDITIONAL_JUMP)  ; LAB_004e112a
    MOV EAX,0x5dbe85                    ; 004e1118
    MOV ESP,EBP                         ; 004e111d
    POP EBP                             ; 004e111f
    RET                                 ; 004e1120
    MOV EAX,0x5dbe81                    ; 004e1121
        ;   Label: LAB_004e1121
    MOV ESP,EBP                         ; 004e1126
    POP EBP                             ; 004e1128
    RET                                 ; 004e1129
    MOV EAX,0x5dbe89                    ; 004e112a
        ;   Label: LAB_004e112a
    MOV ESP,EBP                         ; 004e112f
    POP EBP                             ; 004e1131
    RET                                 ; 004e1132

