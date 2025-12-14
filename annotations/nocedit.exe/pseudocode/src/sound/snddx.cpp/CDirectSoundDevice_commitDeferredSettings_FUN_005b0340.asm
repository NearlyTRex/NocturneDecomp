; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340(CDirectSoundDevice * this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   GUID DAT_00681df0
;   IKsPropertySet* g_DirectSoundPropertySet
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 005b0340
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340
    MOV EDX,dword ptr [0x03f6a9c0]      ; 005b0343 | g_DirectSoundPropertySet
    TEST EDX,EDX                        ; 005b0349
    JNZ 0x005b0351                      ; 005b034b
        ;   XREF to: 005b0351 (CONDITIONAL_JUMP)  ; LAB_005b0351
    ADD ESP,0x10                        ; 005b034d
    RET                                 ; 005b0350
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b0351
        ;   Label: LAB_005b0351
    PUSH 0x10                           ; 005b0355
    MOV dword ptr [ESP + 0x8],EAX       ; 005b0357
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b035b
    XOR ECX,ECX                         ; 005b035f
    MOV dword ptr [ESP + 0xc],EAX       ; 005b0361
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b0365
    MOV dword ptr [ESP + 0x4],ECX       ; 005b0369
    MOV dword ptr [ESP + 0x10],EAX      ; 005b036d
    MOV EAX,EDX                         ; 005b0371
    MOV ECX,dword ptr [EDX]             ; 005b0373
    LEA EDX,[ESP + 0x4]                 ; 005b0375
    PUSH EDX                            ; 005b0379
    PUSH 0x0                            ; 005b037a
    PUSH 0x0                            ; 005b037c
    PUSH 0x0                            ; 005b037e
    PUSH 0x681df0                       ; 005b0380 | DAT_00681df0
    PUSH EAX                            ; 005b0385
    CALL dword ptr [ECX + 0x10]         ; 005b0386
    ADD ESP,0x10                        ; 005b0389
    RET                                 ; 005b038c

