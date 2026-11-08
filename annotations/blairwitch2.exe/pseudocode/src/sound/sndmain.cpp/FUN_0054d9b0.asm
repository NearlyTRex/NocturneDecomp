; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054d9b0(undefined1 *param_1)
;
;
; XREF[10]:
;   FUN_0054b960 at 0054ba0a
;   FUN_0054c1c0 at 0054c237
;   FUN_0054c7f0 at 0054cb49
;   FUN_0054ccf0 at 0054cd7b
;   FUN_0054d810 at 0054d816
;   FUN_0054d840 at 0054d95b
;   FUN_0054ddf0 at 0054e0b1
;   FUN_0054f700 at 0054f818
;   FUN_00551c70 at 00551c88
;   FUN_00552c40 at 00552c57
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e80da
;   TerminatedCString s_SfxSample_freeMemory_fre_005e80ef
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00509cb0
;   FUN_0054da70
;   FUN_0054dac0
;   FUN_0054dbf0
;   FUN_0057d180
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d9b0
        ;   Label: FUN_0054d9b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054d9b1
    CMP dword ptr [EBX + 0x154],0x0     ; 0054d9b5
    JZ 0x0054d9e3                       ; 0054d9bc
        ;   XREF to: 0054d9e3 (CONDITIONAL_JUMP)  ; LAB_0054d9e3
    PUSH ESI                            ; 0054d9be
    MOV ECX,0x5e80da                    ; 0054d9bf | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x858                       ; 0054d9c4
    PUSH 0x5e80ef                       ; 0054d9c9 | = "SfxSample::freeMemory - freeing sampl..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054d9ce | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054d9d4 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054d9da
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054d9df
    POP ESI                             ; 0054d9e2
    PUSH EBX                            ; 0054d9e3
        ;   Label: LAB_0054d9e3
    CALL FUN_0054dbf0                   ; 0054d9e4
        ;   XREF to: 0054dbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbf0()
    ADD ESP,0x4                         ; 0054d9e9
    PUSH EBX                            ; 0054d9ec
    CALL FUN_0054dac0                   ; 0054d9ed
        ;   XREF to: 0054dac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dac0()
    ADD ESP,0x4                         ; 0054d9f2
    PUSH EBX                            ; 0054d9f5
    CALL FUN_0054da70                   ; 0054d9f6
        ;   XREF to: 0054da70 (UNCONDITIONAL_CALL)  ; undefined FUN_0054da70()
    MOV EAX,dword ptr [EBX + 0x174]     ; 0054d9fb
    ADD ESP,0x4                         ; 0054da01
    TEST EAX,EAX                        ; 0054da04
    JNZ 0x0054da58                      ; 0054da06
        ;   XREF to: 0054da58 (CONDITIONAL_JUMP)  ; LAB_0054da58
    LEA EAX,[EBX + 0x17c]               ; 0054da08
        ;   Label: LAB_0054da08
    PUSH EAX                            ; 0054da0e
    MOV dword ptr [EBX + 0x174],0x0     ; 0054da0f
    CALL FUN_0057d180                   ; 0054da19
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d180()
    MOV byte ptr [EBX],0x0              ; 0054da1e
    MOV dword ptr [EBX + 0x150],0x0     ; 0054da21
    MOV dword ptr [EBX + 0x15c],0x0     ; 0054da2b
    MOV dword ptr [EBX + 0x164],0x0     ; 0054da35
    MOV dword ptr [EBX + 0x168],0x0     ; 0054da3f
    ADD ESP,0x4                         ; 0054da49
    MOV dword ptr [EBX + 0x160],0xffffffff ; 0054da4c
    POP EBX                             ; 0054da56
    RET                                 ; 0054da57
    PUSH 0x0                            ; 0054da58
        ;   Label: LAB_0054da58
    PUSH EAX                            ; 0054da5a
    CALL FUN_00509cb0                   ; 0054da5b
        ;   XREF to: 00509cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00509cb0()
    ADD ESP,0x8                         ; 0054da60
    PUSH EAX                            ; 0054da63
    CALL FUN_005b7fdc                   ; 0054da64
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0054da69
    JMP 0x0054da08                      ; 0054da6c
        ;   XREF to: 0054da08 (UNCONDITIONAL_JUMP)  ; LAB_0054da08

