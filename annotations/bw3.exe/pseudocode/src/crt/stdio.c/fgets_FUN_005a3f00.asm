; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdio_c_fgets_FUN_005a3f00(char *param_1,int param_2,int param_3)
;
;
; XREF[19]:
;   core_box.cpp_CBox_loadFromFile_FUN_0041d480 at 0041d4a2
;   core_cloth.cpp_FUN_0043c330 at 0043c37f
;   core_dcamera.cpp_loadCameraFog_FUN_00450c00 at 00450c21
;   core_event.cpp_CEventList_loadState_FUN_00495490 at 004954bc
;   core_fire.cpp_CFireEffect_load_FUN_004a4030 at 004a4064
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aa921
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c0635
;   core_game.cpp_FUN_004bdfb0 at 004be3dd
;   core_gore.cpp_CGore_load_FUN_004cf010 at 004cf02c
;   core_inv.cpp_CInventory_load_FUN_004dc750 at 004dc78c
;   ... and 9 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3f00
        ;   Label: crt_stdio.c_fgets_FUN_005a3f00
    PUSH ESI                            ; 005a3f01
    PUSH EDI                            ; 005a3f02
    PUSH EBP                            ; 005a3f03
    SUB ESP,0x8                         ; 005a3f04
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a3f07
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a3f0b
    MOV EDI,dword ptr [ESP + 0x24]      ; 005a3f0f
    MOV EDX,dword ptr [EDI + 0x10]      ; 005a3f13
    PUSH EDX                            ; 005a3f16
    CALL dword ptr [0x006079a4]         ; 005a3f17 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EAX,dword ptr [EDI + 0xc]       ; 005a3f1d
    ADD ESP,0x4                         ; 005a3f20
    AND EAX,0x30                        ; 005a3f23
    MOV dword ptr [ESP + 0x4],EAX       ; 005a3f26
    MOV AH,byte ptr [EDI + 0xc]         ; 005a3f2a
    AND AH,0xcf                         ; 005a3f2d
    MOV EBX,EBP                         ; 005a3f30
    MOV byte ptr [EDI + 0xc],AH         ; 005a3f32
    DEC ESI                             ; 005a3f35
        ;   Label: LAB_005a3f35
    TEST ESI,ESI                        ; 005a3f36
    JLE 0x005a3f56                      ; 005a3f38
        ;   XREF to: 005a3f56 (CONDITIONAL_JUMP)  ; LAB_005a3f56
    PUSH EDI                            ; 005a3f3a
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 005a3f3b
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 005a3f40
    MOV dword ptr [ESP],EAX             ; 005a3f43
    CMP EAX,-0x1                        ; 005a3f46
    JZ 0x005a3f56                       ; 005a3f49
        ;   XREF to: 005a3f56 (CONDITIONAL_JUMP)  ; LAB_005a3f56
    INC EBX                             ; 005a3f4b
    MOV AL,byte ptr [ESP]               ; 005a3f4c
    MOV byte ptr [EBX + -0x1],AL        ; 005a3f4f
    CMP AL,0xa                          ; 005a3f52
    JNZ 0x005a3f35                      ; 005a3f54
        ;   XREF to: 005a3f35 (CONDITIONAL_JUMP)  ; LAB_005a3f35
    CMP dword ptr [ESP],-0x1            ; 005a3f56
        ;   Label: LAB_005a3f56
    JNZ 0x005a3f6a                      ; 005a3f5a
        ;   XREF to: 005a3f6a (CONDITIONAL_JUMP)  ; LAB_005a3f6a
    CMP EBX,EBP                         ; 005a3f5c
    JZ 0x005a3f66                       ; 005a3f5e
        ;   XREF to: 005a3f66 (CONDITIONAL_JUMP)  ; LAB_005a3f66
    TEST byte ptr [EDI + 0xc],0x20      ; 005a3f60
    JZ 0x005a3f6a                       ; 005a3f64
        ;   XREF to: 005a3f6a (CONDITIONAL_JUMP)  ; LAB_005a3f6a
    XOR EBP,EBP                         ; 005a3f66
        ;   Label: LAB_005a3f66
    JMP 0x005a3f6d                      ; 005a3f68
        ;   XREF to: 005a3f6d (UNCONDITIONAL_JUMP)  ; LAB_005a3f6d
    MOV byte ptr [EBX],0x0              ; 005a3f6a
        ;   Label: LAB_005a3f6a
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a3f6d
        ;   Label: LAB_005a3f6d
    MOV ESI,dword ptr [EDI + 0xc]       ; 005a3f71
    OR ESI,EAX                          ; 005a3f74
    MOV EAX,dword ptr [EDI + 0x10]      ; 005a3f76
    PUSH EAX                            ; 005a3f79
    MOV dword ptr [EDI + 0xc],ESI       ; 005a3f7a
    CALL dword ptr [0x006079a8]         ; 005a3f7d | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a3f83
    MOV EAX,EBP                         ; 005a3f86
    ADD ESP,0x8                         ; 005a3f88
    POP EBP                             ; 005a3f8b
    POP EDI                             ; 005a3f8c
    POP ESI                             ; 005a3f8d
    POP EBX                             ; 005a3f8e
    RET                                 ; 005a3f8f

