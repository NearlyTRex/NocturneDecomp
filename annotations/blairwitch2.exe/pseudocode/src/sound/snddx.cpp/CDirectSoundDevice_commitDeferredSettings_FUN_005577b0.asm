; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005577b0(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061bf70
;   undefined4 DAT_0264a5d4
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 005577b0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005577b0
    MOV EDX,dword ptr [0x0264a5d4]      ; 005577b3 | DAT_0264a5d4
    TEST EDX,EDX                        ; 005577b9
    JNZ 0x005577c1                      ; 005577bb
        ;   XREF to: 005577c1 (CONDITIONAL_JUMP)  ; LAB_005577c1
    ADD ESP,0x10                        ; 005577bd
    RET                                 ; 005577c0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005577c1
        ;   Label: LAB_005577c1
    PUSH 0x10                           ; 005577c5
    MOV dword ptr [ESP + 0x8],EAX       ; 005577c7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005577cb
    XOR ECX,ECX                         ; 005577cf
    MOV dword ptr [ESP + 0xc],EAX       ; 005577d1
    MOV EAX,dword ptr [ESP + 0x24]      ; 005577d5
    MOV dword ptr [ESP + 0x4],ECX       ; 005577d9
    MOV dword ptr [ESP + 0x10],EAX      ; 005577dd
    MOV EAX,EDX                         ; 005577e1
    MOV ECX,dword ptr [EDX]             ; 005577e3
    LEA EDX,[ESP + 0x4]                 ; 005577e5
    PUSH EDX                            ; 005577e9
    PUSH 0x0                            ; 005577ea
    PUSH 0x0                            ; 005577ec
    PUSH 0x0                            ; 005577ee
    PUSH 0x61bf70                       ; 005577f0 | DAT_0061bf70
    PUSH EAX                            ; 005577f5
    CALL dword ptr [ECX + 0x10]         ; 005577f6
    ADD ESP,0x10                        ; 005577f9
    RET                                 ; 005577fc

