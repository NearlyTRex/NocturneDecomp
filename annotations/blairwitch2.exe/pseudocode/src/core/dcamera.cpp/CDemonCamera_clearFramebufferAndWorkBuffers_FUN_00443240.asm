; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00443240(CDemonCamera *this_ptr,int clear_color)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clear_color
;
; XREF[1]:
;   core_game.cpp_FUN_004b90d0 at 004ba6fd
;
; Referenced Globals:
;   undefined4 DAT_01326d20
;   undefined4 DAT_01326d21
;   undefined4 DAT_01326e60
;   undefined4 DAT_01339a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443240
        ;   Label: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00443240
    PUSH ESI                            ; 00443241
    PUSH EDI                            ; 00443242
    PUSH EBP                            ; 00443243
    MOV EDX,dword ptr [ESP + 0x14]      ; 00443244
    MOV EDI,dword ptr [ESP + 0x18]      ; 00443248
    MOV ECX,dword ptr [EDX + 0x148]     ; 0044324c
    XOR ESI,ESI                         ; 00443252
    TEST ECX,ECX                        ; 00443254
    JLE 0x0044328a                      ; 00443256
        ;   XREF to: 0044328a (CONDITIONAL_JUMP)  ; LAB_0044328a
    MOV EBP,dword ptr [EDX + 0x144]     ; 00443258
        ;   Label: LAB_00443258
    XOR EAX,EAX                         ; 0044325e
    TEST EBP,EBP                        ; 00443260
    JLE 0x00443281                      ; 00443262
        ;   XREF to: 00443281 (CONDITIONAL_JUMP)  ; LAB_00443281
    MOV ECX,dword ptr [EDX + 0x144]     ; 00443264
        ;   Label: LAB_00443264
    IMUL ECX,ESI                        ; 0044326a
    MOV EBX,dword ptr [EDX + 0x158]     ; 0044326d
    ADD ECX,EAX                         ; 00443273
    MOV dword ptr [EBX + ECX*0x4],EDI   ; 00443275
    INC EAX                             ; 00443278
    CMP EAX,dword ptr [EDX + 0x144]     ; 00443279
    JL 0x00443264                       ; 0044327f
        ;   XREF to: 00443264 (CONDITIONAL_JUMP)  ; LAB_00443264
    INC ESI                             ; 00443281
        ;   Label: LAB_00443281
    CMP ESI,dword ptr [EDX + 0x148]     ; 00443282
    JL 0x00443258                       ; 00443288
        ;   XREF to: 00443258 (CONDITIONAL_JUMP)  ; LAB_00443258
    MOV ESI,0x140                       ; 0044328a
        ;   Label: LAB_0044328a
    XOR ECX,ECX                         ; 0044328f
    MOV EDX,ESI                         ; 00443291
        ;   Label: LAB_00443291
    XOR BL,BL                           ; 00443293
    IMUL EAX,ECX,0x140                  ; 00443295
    INC EAX                             ; 0044329b
        ;   Label: LAB_0044329b
    MOV byte ptr [EAX + 0x133991f],BL   ; 0044329c | DAT_01339a60
    MOV byte ptr [EAX + 0x1326d1f],BL   ; 004432a2 | DAT_01326d20 | DAT_01326d21 | DAT_01326e60
    CMP EAX,EDX                         ; 004432a8
    JNZ 0x0044329b                      ; 004432aa
        ;   XREF to: 0044329b (CONDITIONAL_JUMP)  ; LAB_0044329b
    INC ECX                             ; 004432ac
    ADD ESI,0x140                       ; 004432ad
    CMP ECX,0xf0                        ; 004432b3
    JL 0x00443291                       ; 004432b9
        ;   XREF to: 00443291 (CONDITIONAL_JUMP)  ; LAB_00443291
    POP EBP                             ; 004432bb
    POP EDI                             ; 004432bc
    POP ESI                             ; 004432bd
    POP EBX                             ; 004432be
    RET                                 ; 004432bf

