; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_larva_cpp_getSizeCategory_FUN_004fe4c0(float scale)
;
; Parameters:
; float            Stack[0x4]:4   scale
;
; Referenced Globals:
;   undefined4 DAT_005e6c9b
;   undefined4 DAT_005e6ca3
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004fe4c0
        ;   Label: core_larva.cpp_getSizeCategory_FUN_004fe4c0
    MOV EBP,ESP                         ; 004fe4c1
    SUB ESP,0x8                         ; 004fe4c3
    AND ESP,0xfffffff8                  ; 004fe4c6
    FLD float ptr [EBP + 0x8]           ; 004fe4c9
    FST double ptr [ESP]                ; 004fe4cc
    FCOMP double ptr [0x005e6c9b]       ; 004fe4cf | DAT_005e6c9b
    FNSTSW AX                           ; 004fe4d5
    SAHF                                ; 004fe4d7
    JC 0x004fe4f1                       ; 004fe4d8
        ;   XREF to: 004fe4f1 (CONDITIONAL_JUMP)  ; LAB_004fe4f1
    FLD double ptr [ESP]                ; 004fe4da
    FCOMP double ptr [0x005e6ca3]       ; 004fe4dd | DAT_005e6ca3
    FNSTSW AX                           ; 004fe4e3
    SAHF                                ; 004fe4e5
    JNC 0x004fe4fa                      ; 004fe4e6
        ;   XREF to: 004fe4fa (CONDITIONAL_JUMP)  ; LAB_004fe4fa
    MOV EAX,0x5e6c92                    ; 004fe4e8
    MOV ESP,EBP                         ; 004fe4ed
    POP EBP                             ; 004fe4ef
    RET                                 ; 004fe4f0
    MOV EAX,0x5e6c8e                    ; 004fe4f1
        ;   Label: LAB_004fe4f1
    MOV ESP,EBP                         ; 004fe4f6
    POP EBP                             ; 004fe4f8
    RET                                 ; 004fe4f9
    MOV EAX,0x5e6c96                    ; 004fe4fa
        ;   Label: LAB_004fe4fa
    MOV ESP,EBP                         ; 004fe4ff
    POP EBP                             ; 004fe501
    RET                                 ; 004fe502

