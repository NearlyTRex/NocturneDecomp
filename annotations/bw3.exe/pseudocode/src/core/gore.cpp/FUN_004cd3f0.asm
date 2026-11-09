; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_gore_cpp_FUN_004cd3f0(CVector3f *param_1,CVector3f *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c4649
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_gore.cpp_CGore_createWallBloodSplat_FUN_004ce980
;   core_gore.cpp_FUN_004ce950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd3f0
        ;   Label: core_gore.cpp_FUN_004cd3f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cd3f1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cd3f5
    MOV EBX,dword ptr [EDX + 0x40]      ; 004cd3f9
    CMP EBX,0x3                         ; 004cd3fc
    JZ 0x004cd423                       ; 004cd3ff
        ;   XREF to: 004cd423 (CONDITIONAL_JUMP)  ; LAB_004cd423
    FLD float ptr [ECX + 0x4]           ; 004cd401
    FCOMP double ptr [0x005c4649]       ; 004cd404 | DAT_005c4649
    FNSTSW AX                           ; 004cd40a
    SAHF                                ; 004cd40c
    JA 0x004cd42a                       ; 004cd40d
        ;   XREF to: 004cd42a (CONDITIONAL_JUMP)  ; LAB_004cd42a
    PUSH EDI                            ; 004cd40f
    PUSH EBX                            ; 004cd410
    PUSH ECX                            ; 004cd411
    PUSH EDX                            ; 004cd412
    MOV EDI,dword ptr [0x005fed24]      ; 004cd413 | g_CGorePtr
    PUSH EDI                            ; 004cd419
    CALL core_gore.cpp_CGore_createWallBloodSplat_FUN_004ce980 ; 004cd41a
        ;   XREF to: 004ce980 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createWallBloodSplat_FUN_004ce980(CGore * this_ptr, CVector3f * position, CVector3f * normal, EBloodType blood_type)
    ADD ESP,0x10                        ; 004cd41f
    POP EDI                             ; 004cd422
    MOV EAX,0x1                         ; 004cd423
        ;   Label: LAB_004cd423
    POP EBX                             ; 004cd428
    RET                                 ; 004cd429
    PUSH EBX                            ; 004cd42a
        ;   Label: LAB_004cd42a
    PUSH EDX                            ; 004cd42b
    MOV EAX,[0x005fed24]                ; 004cd42c | g_CGorePtr
    PUSH EAX                            ; 004cd431
    CALL core_gore.cpp_FUN_004ce950     ; 004cd432
        ;   XREF to: 004ce950 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce950(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004cd437
    MOV EAX,0x1                         ; 004cd43a
    POP EBX                             ; 004cd43f
    RET                                 ; 004cd440

