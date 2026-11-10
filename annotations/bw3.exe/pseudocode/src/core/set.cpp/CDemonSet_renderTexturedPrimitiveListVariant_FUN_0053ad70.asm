; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; int              Stack[0xc]:4   count
;
; XREF[1]:
;   core_dpart.cpp_FUN_0046682e at 00466972
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;
; Called Functions:
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ad70
        ;   Label: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70
    PUSH ESI                            ; 0053ad71
    PUSH EDI                            ; 0053ad72
    PUSH EBP                            ; 0053ad73
    MOV EBP,dword ptr [ESP + 0x14]      ; 0053ad74
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053ad78
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053ad7c
    MOV EBX,dword ptr [0x005fe9dc]      ; 0053ad80 | g_CGamePtr
    CMP dword ptr [EBX + 0x214],0x0     ; 0053ad86
    JNZ 0x0053adc0                      ; 0053ad8d
        ;   XREF to: 0053adc0 (CONDITIONAL_JUMP)  ; LAB_0053adc0
    MOV EBX,dword ptr [0x005f2afc]      ; 0053ad8f | DAT_005f2afc
    MOV EBX,dword ptr [EBX + 0x18]      ; 0053ad95
    TEST EBX,EBX                        ; 0053ad98
    JZ 0x0053adc5                       ; 0053ad9a
        ;   XREF to: 0053adc5 (CONDITIONAL_JUMP)  ; LAB_0053adc5
    XOR EBX,EBX                         ; 0053ad9c
    TEST EDI,EDI                        ; 0053ad9e
    JLE 0x0053adc0                      ; 0053ada0
        ;   XREF to: 0053adc0 (CONDITIONAL_JUMP)  ; LAB_0053adc0
    MOV ESI,EAX                         ; 0053ada2
    PUSH ESI                            ; 0053ada4
        ;   Label: LAB_0053ada4
    MOV EAX,dword ptr [EBP + 0x161668]  ; 0053ada5
    PUSH EAX                            ; 0053adab
    INC EBX                             ; 0053adac
    CALL core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0 ; 0053adad
        ;   XREF to: 004f53f0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESI,0x48                        ; 0053adb2
    ADD ESP,0x8                         ; 0053adb5
    CMP EBX,EDI                         ; 0053adb8
    JL 0x0053ada4                       ; 0053adba
        ;   XREF to: 0053ada4 (CONDITIONAL_JUMP)  ; LAB_0053ada4
    LEA EAX,[EAX]                       ; 0053adbc
    POP EBP                             ; 0053adc0
        ;   Label: LAB_0053adc0
    POP EDI                             ; 0053adc1
    POP ESI                             ; 0053adc2
    POP EBX                             ; 0053adc3
    RET                                 ; 0053adc4
    XOR ESI,ESI                         ; 0053adc5
        ;   Label: LAB_0053adc5
    TEST EDI,EDI                        ; 0053adc7
    JLE 0x0053adc0                      ; 0053adc9
        ;   XREF to: 0053adc0 (CONDITIONAL_JUMP)  ; LAB_0053adc0
    MOV EBX,EAX                         ; 0053adcb
    PUSH EBX                            ; 0053adcd
        ;   Label: LAB_0053adcd
    MOV ECX,dword ptr [0x005f2afc]      ; 0053adce | DAT_005f2afc
    PUSH ECX                            ; 0053add4
    INC ESI                             ; 0053add5
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 0053add6
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EBX,0x48                        ; 0053addb
    ADD ESP,0x8                         ; 0053adde
    CMP ESI,EDI                         ; 0053ade1
    JL 0x0053adcd                       ; 0053ade3
        ;   XREF to: 0053adcd (CONDITIONAL_JUMP)  ; LAB_0053adcd
    POP EBP                             ; 0053ade5
    POP EDI                             ; 0053ade6
    POP ESI                             ; 0053ade7
    POP EBX                             ; 0053ade8
    RET                                 ; 0053ade9

