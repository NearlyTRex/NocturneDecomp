; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_FUN_005a5010(int param_1,int param_2)
;
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_enemy.cpp_FUN_004a0f00
;   core_gore.cpp_FUN_004e6060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5010
        ;   Label: core_tvbat.cpp_FUN_005a5010
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5011
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 005a5015
    TEST EDX,EDX                        ; 005a501b
    JNZ 0x005a5072                      ; 005a501d
        ;   XREF to: 005a5072 (CONDITIONAL_JUMP)  ; LAB_005a5072
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a501f
    FLD float ptr [EAX + 0x4]           ; 005a5023
    FSUBR float ptr [EBX + 0x2538]      ; 005a5026
    FST float ptr [EBX + 0x2538]        ; 005a502c
    FLDZ                                ; 005a5032
    FCOMPP                              ; 005a5034
    FNSTSW AX                           ; 005a5036
    SAHF                                ; 005a5038
    JC 0x005a5062                       ; 005a5039
        ;   XREF to: 005a5062 (CONDITIONAL_JUMP)  ; LAB_005a5062
    PUSH EDX                            ; 005a503b
    PUSH 0xa                            ; 005a503c
    PUSH EDX                            ; 005a503e
    LEA EAX,[EBX + 0x20]                ; 005a503f
    PUSH EAX                            ; 005a5042
    MOV ECX,dword ptr [0x0061dca4]      ; 005a5043 | g_CGorePtr
    PUSH ECX                            ; 005a5049
    MOV dword ptr [EBX + 0x2538],EDX    ; 005a504a
    CALL core_gore.cpp_FUN_004e6060     ; 005a5050
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005a5055
    MOV dword ptr [EBX + 0xc424],0x1    ; 005a5058
    PUSH ESI                            ; 005a5062
        ;   Label: LAB_005a5062
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a5063
    PUSH ESI                            ; 005a5067
    PUSH EBX                            ; 005a5068
    CALL core_enemy.cpp_FUN_004a0f00    ; 005a5069
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 005a506e
    POP ESI                             ; 005a5071
    POP EBX                             ; 005a5072
        ;   Label: LAB_005a5072
    RET                                 ; 005a5073

