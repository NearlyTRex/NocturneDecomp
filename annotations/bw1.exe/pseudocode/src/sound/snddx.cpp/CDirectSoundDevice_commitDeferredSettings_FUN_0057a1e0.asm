; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a1e0(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_006235c0
;   undefined4 DAT_02c81da4
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0057a1e0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a1e0
    MOV EDX,dword ptr [0x02c81da4]      ; 0057a1e3 | DAT_02c81da4
    TEST EDX,EDX                        ; 0057a1e9
    JNZ 0x0057a1f1                      ; 0057a1eb
        ;   XREF to: 0057a1f1 (CONDITIONAL_JUMP)  ; LAB_0057a1f1
    ADD ESP,0x10                        ; 0057a1ed
    RET                                 ; 0057a1f0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057a1f1
        ;   Label: LAB_0057a1f1
    PUSH 0x10                           ; 0057a1f5
    MOV dword ptr [ESP + 0x8],EAX       ; 0057a1f7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057a1fb
    XOR ECX,ECX                         ; 0057a1ff
    MOV dword ptr [ESP + 0xc],EAX       ; 0057a201
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057a205
    MOV dword ptr [ESP + 0x4],ECX       ; 0057a209
    MOV dword ptr [ESP + 0x10],EAX      ; 0057a20d
    MOV EAX,EDX                         ; 0057a211
    MOV ECX,dword ptr [EDX]             ; 0057a213
    LEA EDX,[ESP + 0x4]                 ; 0057a215
    PUSH EDX                            ; 0057a219
    PUSH 0x0                            ; 0057a21a
    PUSH 0x0                            ; 0057a21c
    PUSH 0x0                            ; 0057a21e
    PUSH 0x6235c0                       ; 0057a220 | DAT_006235c0
    PUSH EAX                            ; 0057a225
    CALL dword ptr [ECX + 0x10]         ; 0057a226
    ADD ESP,0x10                        ; 0057a229
    RET                                 ; 0057a22c

