; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdio_c_fgets_FUN_00564b20(char *param_1,int param_2,int param_3)
;
;
; XREF[19]:
;   FUN_004a4170 at 004a45cd
;   FUN_004edfc0 at 004ee039
;   core_box.cpp_CBox_loadFromFile_FUN_0041c850 at 0041c872
;   core_cloth.cpp_CCloth_load_FUN_00435240 at 0043528f
;   core_dcamera.cpp_loadCameraFog_FUN_00447d10 at 00447d31
;   core_event.cpp_CEventList_loadState_FUN_00480f70 at 00480f9c
;   core_fire.cpp_CFireEffect_load_FUN_0048c7d0 at 0048c804
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6f3c
;   core_gore.cpp_CGore_load_FUN_004b0820 at 004b083c
;   core_inv.cpp_CInventory_load_FUN_004c1190 at 004c11cc
;   ... and 9 more
;
; Referenced Globals:
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_00564570
;   FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564b20
        ;   Label: crt_stdio.c_fgets_FUN_00564b20
    PUSH ESI                            ; 00564b21
    PUSH EDI                            ; 00564b22
    PUSH EBP                            ; 00564b23
    SUB ESP,0x8                         ; 00564b24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00564b27
    MOV ESI,dword ptr [ESP + 0x20]      ; 00564b2b
    MOV EDI,dword ptr [ESP + 0x24]      ; 00564b2f
    MOV EDX,dword ptr [EDI + 0x10]      ; 00564b33
    PUSH EDX                            ; 00564b36
    CALL dword ptr [0x005c1ac0]         ; 00564b37 | PTR_FUN_005c1ac0
    MOV EAX,dword ptr [EDI + 0xc]       ; 00564b3d
    ADD ESP,0x4                         ; 00564b40
    AND EAX,0x30                        ; 00564b43
    MOV dword ptr [ESP + 0x4],EAX       ; 00564b46
    MOV AH,byte ptr [EDI + 0xc]         ; 00564b4a
    AND AH,0xcf                         ; 00564b4d
    MOV EBX,EBP                         ; 00564b50
    MOV byte ptr [EDI + 0xc],AH         ; 00564b52
    DEC ESI                             ; 00564b55
        ;   Label: LAB_00564b55
    TEST ESI,ESI                        ; 00564b56
    JLE 0x00564b76                      ; 00564b58
        ;   XREF to: 00564b76 (CONDITIONAL_JUMP)  ; LAB_00564b76
    PUSH EDI                            ; 00564b5a
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00564b5b
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00564b60
    MOV dword ptr [ESP],EAX             ; 00564b63
    CMP EAX,-0x1                        ; 00564b66
    JZ 0x00564b76                       ; 00564b69
        ;   XREF to: 00564b76 (CONDITIONAL_JUMP)  ; LAB_00564b76
    INC EBX                             ; 00564b6b
    MOV AL,byte ptr [ESP]               ; 00564b6c
    MOV byte ptr [EBX + -0x1],AL        ; 00564b6f
    CMP AL,0xa                          ; 00564b72
    JNZ 0x00564b55                      ; 00564b74
        ;   XREF to: 00564b55 (CONDITIONAL_JUMP)  ; LAB_00564b55
    CMP dword ptr [ESP],-0x1            ; 00564b76
        ;   Label: LAB_00564b76
    JNZ 0x00564b8a                      ; 00564b7a
        ;   XREF to: 00564b8a (CONDITIONAL_JUMP)  ; LAB_00564b8a
    CMP EBX,EBP                         ; 00564b7c
    JZ 0x00564b86                       ; 00564b7e
        ;   XREF to: 00564b86 (CONDITIONAL_JUMP)  ; LAB_00564b86
    TEST byte ptr [EDI + 0xc],0x20      ; 00564b80
    JZ 0x00564b8a                       ; 00564b84
        ;   XREF to: 00564b8a (CONDITIONAL_JUMP)  ; LAB_00564b8a
    XOR EBP,EBP                         ; 00564b86
        ;   Label: LAB_00564b86
    JMP 0x00564b8d                      ; 00564b88
        ;   XREF to: 00564b8d (UNCONDITIONAL_JUMP)  ; LAB_00564b8d
    MOV byte ptr [EBX],0x0              ; 00564b8a
        ;   Label: LAB_00564b8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00564b8d
        ;   Label: LAB_00564b8d
    MOV ESI,dword ptr [EDI + 0xc]       ; 00564b91
    OR ESI,EAX                          ; 00564b94
    MOV EAX,dword ptr [EDI + 0x10]      ; 00564b96
    PUSH EAX                            ; 00564b99
    MOV dword ptr [EDI + 0xc],ESI       ; 00564b9a
    CALL dword ptr [0x005c1ac4]         ; 00564b9d | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00564ba3
    MOV EAX,EBP                         ; 00564ba6
    ADD ESP,0x8                         ; 00564ba8
    POP EBP                             ; 00564bab
    POP EDI                             ; 00564bac
    POP ESI                             ; 00564bad
    POP EBX                             ; 00564bae
    RET                                 ; 00564baf

