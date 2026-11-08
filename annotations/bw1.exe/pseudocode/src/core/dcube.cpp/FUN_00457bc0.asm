; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00457bc0(int *param_1)
;
;
; XREF[2]:
;   FUN_0048f920 at 0048fa0c
;   FUN_0048fa40 at 0048fb2b
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005d7acf
;   TerminatedCString s_CDemonCube_allocMemory_O_005d7ae1
;   TerminatedCString s_core_dcube_cpp_005d7b0f
;   TerminatedCString s_CDemonCube_allocMemory_O_005d7b21
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c1cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457bc0
        ;   Label: FUN_00457bc0
    PUSH EBP                            ; 00457bc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00457bc2
    PUSH 0x1                            ; 00457bc6
    PUSH 0x40                           ; 00457bc8
    CALL FUN_005c1cb0                   ; 00457bca
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1cb0()
    ADD ESP,0x8                         ; 00457bcf
    MOV dword ptr [EBX],EAX             ; 00457bd2
    TEST EAX,EAX                        ; 00457bd4
    JNZ 0x00457bfd                      ; 00457bd6
        ;   XREF to: 00457bfd (CONDITIONAL_JUMP)  ; LAB_00457bfd
    PUSH ESI                            ; 00457bd8
    MOV ECX,0x5d7acf                    ; 00457bd9 | = "..\\core\\dcube.cpp"
    MOV ESI,0x5f3                       ; 00457bde
    PUSH 0x5d7ae1                       ; 00457be3 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d1d400],ECX      ; 00457be8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00457bee | DAT_01d1d404
    CALL FUN_005030e0                   ; 00457bf4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00457bf9
    POP ESI                             ; 00457bfc
    PUSH 0x1                            ; 00457bfd
        ;   Label: LAB_00457bfd
    PUSH 0x40                           ; 00457bff
    CALL FUN_005c1cb0                   ; 00457c01
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1cb0()
    ADD ESP,0x8                         ; 00457c06
    MOV dword ptr [EBX + 0x4],EAX       ; 00457c09
    TEST EAX,EAX                        ; 00457c0c
    JZ 0x00457c13                       ; 00457c0e
        ;   XREF to: 00457c13 (CONDITIONAL_JUMP)  ; LAB_00457c13
    POP EBP                             ; 00457c10
    POP EBX                             ; 00457c11
    RET                                 ; 00457c12
    MOV EBP,0x5d7b0f                    ; 00457c13 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00457c13
    MOV EAX,0x5f5                       ; 00457c18
    PUSH 0x5d7b21                       ; 00457c1d | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d1d400],EBP      ; 00457c22 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00457c28 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00457c2d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00457c32
    POP EBP                             ; 00457c35
    POP EBX                             ; 00457c36
    RET                                 ; 00457c37

