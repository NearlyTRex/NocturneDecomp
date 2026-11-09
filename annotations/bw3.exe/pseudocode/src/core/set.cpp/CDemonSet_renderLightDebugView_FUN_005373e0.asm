; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_005373e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7334
;
; Referenced Globals:
;   TerminatedCString s_d_omni_lights_005d0620
;   TerminatedCString s_d_spot_lights_005d062f
;   undefined4 DAT_00603b3c
;   undefined4 DAT_00603b40
;   undefined4 DAT_00603b44
;   undefined4 DAT_00603cbc
;   undefined4 DAT_00603cc0
;   undefined4 DAT_00603cc4
;   undefined4 DAT_0203a598
;   undefined4 DAT_0203a59c
;   undefined4 DAT_0203ad1c
;   undefined4 DAT_0203b3e8
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40
;   crt_unknown.c_FUN_005a28c0
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005373e0
        ;   Label: core_set.cpp_CDemonSet_renderLightDebugView_FUN_005373e0
    PUSH ESI                            ; 005373e1
    PUSH EDI                            ; 005373e2
    PUSH EBP                            ; 005373e3
    SUB ESP,0x100                       ; 005373e4
    MOV EDX,dword ptr [0x0203a598]      ; 005373ea | DAT_0203a598
    XOR ESI,ESI                         ; 005373f0
    TEST EDX,EDX                        ; 005373f2
    JLE 0x00537430                      ; 005373f4
        ;   XREF to: 00537430 (CONDITIONAL_JUMP)  ; LAB_00537430
    XOR EBX,EBX                         ; 005373f6
    PUSH 0x80                           ; 005373f8
        ;   Label: LAB_005373f8
    MOV ECX,dword ptr [EBX + 0x603cbc]  ; 005373fd | DAT_00603cbc | DAT_00603cc0
    PUSH ECX                            ; 00537403
    MOV EDI,dword ptr [EBX + 0x603b3c]  ; 00537404 | DAT_00603b3c | DAT_00603b40
    PUSH EDI                            ; 0053740a
    MOV EBP,dword ptr [EBX + 0x203a59c] ; 0053740b | DAT_0203a59c
    PUSH EBP                            ; 00537411
    ADD EBX,0x4                         ; 00537412
    INC ESI                             ; 00537415
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40 ; 00537416
        ;   XREF to: 0045ce40 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EAX,[0x0203a598]                ; 0053741b | DAT_0203a598
    ADD ESP,0x10                        ; 00537420
    CMP ESI,EAX                         ; 00537423
    JL 0x005373f8                       ; 00537425
        ;   XREF to: 005373f8 (CONDITIONAL_JUMP)  ; LAB_005373f8
    LEA EAX,[EAX]                       ; 00537427
    LEA EDX,[EDX]                       ; 0053742d
    MOV EDX,dword ptr [0x0203ad1c]      ; 00537430 | DAT_0203ad1c
        ;   Label: LAB_00537430
    XOR EBP,EBP                         ; 00537436
    TEST EDX,EDX                        ; 00537438
    JLE 0x00537480                      ; 0053743a
        ;   XREF to: 00537480 (CONDITIONAL_JUMP)  ; LAB_00537480
    LEA EBX,[ESI*0x4 + 0x0]             ; 0053743c
    XOR EDI,EDI                         ; 00537443
    PUSH 0x80                           ; 00537445
        ;   Label: LAB_00537445
    MOV ECX,dword ptr [EBX + 0x603cbc]  ; 0053744a | DAT_00603cc0 | DAT_00603cc4 | DAT_00603cbc
    PUSH ECX                            ; 00537450
    MOV ESI,dword ptr [EBX + 0x603b3c]  ; 00537451 | DAT_00603b40 | DAT_00603b44 | DAT_00603b3c
    PUSH ESI                            ; 00537457
    MOV EAX,dword ptr [EDI + 0x203ad20] ; 00537458
    ADD EDI,0x4                         ; 0053745e
    PUSH EAX                            ; 00537461
    ADD EBX,0x4                         ; 00537462
    INC EBP                             ; 00537465
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40 ; 00537466
        ;   XREF to: 0045ce40 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EDX,dword ptr [0x0203ad1c]      ; 0053746b | DAT_0203ad1c
    ADD ESP,0x10                        ; 00537471
    CMP EBP,EDX                         ; 00537474
    JL 0x00537445                       ; 00537476
        ;   XREF to: 00537445 (CONDITIONAL_JUMP)  ; LAB_00537445
    LEA EAX,[EAX]                       ; 00537478
    MOV EDX,EDX                         ; 0053747e
    MOV ESI,dword ptr [0x0203b3e8]      ; 00537480 | DAT_0203b3e8
        ;   Label: LAB_00537480
    PUSH ESI                            ; 00537486
    MOV EBX,dword ptr [0x0203a598]      ; 00537487 | DAT_0203a598
    PUSH 0x5d0620                       ; 0053748d | = "%d omni lights"
    LEA ESI,[ESP + 0x8]                 ; 00537492
    MOV ECX,dword ptr [0x0203ad1c]      ; 00537496 | DAT_0203ad1c
    PUSH ESI                            ; 0053749c
    ADD EBX,ECX                         ; 0053749d
    CALL crt_unknown.c_FUN_005a28c0     ; 0053749f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 005374a4
    MOV EDI,dword ptr [EBX*0x4 + 0x603cbc] ; 005374a7 | DAT_00603cbc
    PUSH EDI                            ; 005374ae
    MOV EBP,dword ptr [EBX*0x4 + 0x603b3c] ; 005374af | DAT_00603b3c
    PUSH EBP                            ; 005374b6
    LEA ESI,[ESP + 0x8]                 ; 005374b7
    PUSH ESI                            ; 005374bb
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005374bc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005374c1
    MOV EAX,[0x0203a598]                ; 005374c4 | DAT_0203a598
    PUSH EAX                            ; 005374c9
    PUSH 0x5d062f                       ; 005374ca | = "%d spot lights"
    LEA ESI,[ESP + 0x8]                 ; 005374cf
    PUSH ESI                            ; 005374d3
    CALL crt_unknown.c_FUN_005a28c0     ; 005374d4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV ESI,dword ptr [EBX*0x4 + 0x603cbc] ; 005374d9 | DAT_00603cbc
    ADD ESP,0xc                         ; 005374e0
    ADD ESI,0xb                         ; 005374e3
    PUSH ESI                            ; 005374e6
    MOV EDX,dword ptr [EBX*0x4 + 0x603b3c] ; 005374e7 | DAT_00603b3c
    PUSH EDX                            ; 005374ee
    LEA EBX,[ESP + 0x8]                 ; 005374ef
    PUSH EBX                            ; 005374f3
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005374f4
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005374f9
    ADD ESP,0x100                       ; 005374fc
    POP EBP                             ; 00537502
    POP EDI                             ; 00537503
    POP ESI                             ; 00537504
    POP EBX                             ; 00537505
    LEA EAX,[EAX]                       ; 00537506
    LEA EDX,[EDX]                       ; 0053750c
    RET                                 ; 00537510

