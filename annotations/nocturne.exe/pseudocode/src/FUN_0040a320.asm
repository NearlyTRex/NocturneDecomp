; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040a320(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a320
        ;   Label: FUN_0040a320
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040a321
    LEA EAX,[EDX + 0x20]                ; 0040a325
    PUSH dword ptr [ESP + 0x10]         ; 0040a328
    PUSH EAX                            ; 0040a32c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040a32d
    PUSH ECX                            ; 0040a331
    PUSH EDX                            ; 0040a332
    MOV EBX,dword ptr [0x005bed68]      ; 0040a333 | DAT_005bed68
    PUSH EBX                            ; 0040a339
    CALL core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00 ; 0040a33a
        ;   XREF to: 0052eb00 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00()
    ADD ESP,0x14                        ; 0040a33f
    POP EBX                             ; 0040a342
    RET                                 ; 0040a343

