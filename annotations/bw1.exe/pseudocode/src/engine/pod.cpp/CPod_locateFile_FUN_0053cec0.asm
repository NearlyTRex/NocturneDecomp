; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_locateFile_FUN_0053cec0(CPod *this_ptr,undefined4 param_2,undefined4 param_3,int *param_4)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; int *            Stack[0x10]:4   param_4
;
; Called Functions:
;   engine_dosio.cpp_FUN_00478e20
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_0053bed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cec0
        ;   Label: engine_pod.cpp_CPod_locateFile_FUN_0053cec0
    PUSH ESI                            ; 0053cec1
    PUSH EDI                            ; 0053cec2
    PUSH EBP                            ; 0053cec3
    SUB ESP,0x214                       ; 0053cec4
    MOV EDI,dword ptr [ESP + 0x228]     ; 0053ceca
    MOV EDX,dword ptr [ESP + 0x230]     ; 0053ced1
    PUSH EDX                            ; 0053ced8
    MOV ECX,dword ptr [ESP + 0x230]     ; 0053ced9
    PUSH ECX                            ; 0053cee0
    LEA EAX,[ESP + 0x8]                 ; 0053cee1
    PUSH EAX                            ; 0053cee5
    XOR EBX,EBX                         ; 0053cee6
    CALL engine_dosio.cpp_FUN_00478e20  ; 0053cee8
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    MOV ESI,dword ptr [EDI]             ; 0053ceed
    ADD ESP,0xc                         ; 0053ceef
    TEST ESI,ESI                        ; 0053cef2
    JLE 0x0053cf36                      ; 0053cef4
        ;   XREF to: 0053cf36 (CONDITIONAL_JUMP)  ; LAB_0053cf36
    MOV ESI,EDI                         ; 0053cef6
    MOV EAX,ESP                         ; 0053cef8
        ;   Label: LAB_0053cef8
    PUSH EAX                            ; 0053cefa
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053cefb
    PUSH EAX                            ; 0053cefe
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_0053bed0 ; 0053ceff
        ;   XREF to: 0053bed0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_0053bed0(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053cf04
    TEST EAX,EAX                        ; 0053cf07
    JL 0x0053cf2c                       ; 0053cf09
        ;   XREF to: 0053cf2c (CONDITIONAL_JUMP)  ; LAB_0053cf2c
    MOV EDX,dword ptr [ESP + 0x234]     ; 0053cf0b
    TEST EDX,EDX                        ; 0053cf12
    JZ 0x0053cf18                       ; 0053cf14
        ;   XREF to: 0053cf18 (CONDITIONAL_JUMP)  ; LAB_0053cf18
    MOV dword ptr [EDX],EAX             ; 0053cf16
    SHL EBX,0x2                         ; 0053cf18
        ;   Label: LAB_0053cf18
    LEA EAX,[EDI + EBX*0x1]             ; 0053cf1b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053cf1e
    ADD ESP,0x214                       ; 0053cf21
    POP EBP                             ; 0053cf27
    POP EDI                             ; 0053cf28
    POP ESI                             ; 0053cf29
    POP EBX                             ; 0053cf2a
    RET                                 ; 0053cf2b
    INC EBX                             ; 0053cf2c
        ;   Label: LAB_0053cf2c
    MOV EBP,dword ptr [EDI]             ; 0053cf2d
    ADD ESI,0x4                         ; 0053cf2f
    CMP EBX,EBP                         ; 0053cf32
    JL 0x0053cef8                       ; 0053cf34
        ;   XREF to: 0053cef8 (CONDITIONAL_JUMP)  ; LAB_0053cef8
    XOR EAX,EAX                         ; 0053cf36
        ;   Label: LAB_0053cf36
    ADD ESP,0x214                       ; 0053cf38
    POP EBP                             ; 0053cf3e
    POP EDI                             ; 0053cf3f
    POP ESI                             ; 0053cf40
    POP EBX                             ; 0053cf41
    RET                                 ; 0053cf42

