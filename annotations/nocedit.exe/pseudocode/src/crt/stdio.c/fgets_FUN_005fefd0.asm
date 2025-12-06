; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int              Stack[0x8]:4   num
; FILE *           Stack[0xc]:4   stream
;
; XREF[32]:
;   core_box.cpp_CBox_loadFromFile_FUN_0041fe90 at 0041feb2
;   core_cloth.cpp_CCloth_load_FUN_00438cf0 at 00438ec0
;   core_dcamera.cpp_loadCameraFog_FUN_00453e50 at 00453e71
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 0047980f
;   core_event.cpp_CEventList_loadState_FUN_004b0fc0 at 004b1321
;   core_fire.cpp_CFireEffect_load_FUN_004c9300 at 004c9334
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e1707
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e40bc
;   core_gore.cpp_FUN_004ee1e0 at 004ee1fc
;   core_inv.cpp_CInventory_load_FUN_004ff400 at 004ff5a3
;   ... and 22 more
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fefd0
        ;   Label: crt_stdio.c_fgets_FUN_005fefd0
    PUSH ESI                            ; 005fefd1
    PUSH EDI                            ; 005fefd2
    PUSH EBP                            ; 005fefd3
    SUB ESP,0x8                         ; 005fefd4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005fefd7
    MOV ESI,dword ptr [ESP + 0x20]      ; 005fefdb
    MOV EDI,dword ptr [ESP + 0x24]      ; 005fefdf
    MOV EDX,dword ptr [EDI + 0x10]      ; 005fefe3
    PUSH EDX                            ; 005fefe6
    CALL dword ptr [0x00684ee8]         ; 005fefe7 | ENTER_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EAX,dword ptr [EDI + 0xc]       ; 005fefed
    ADD ESP,0x4                         ; 005feff0
    AND EAX,0x30                        ; 005feff3
    MOV dword ptr [ESP + 0x4],EAX       ; 005feff6
    MOV AH,byte ptr [EDI + 0xc]         ; 005feffa
    AND AH,0xcf                         ; 005feffd
    MOV EBX,EBP                         ; 005ff000
    MOV byte ptr [EDI + 0xc],AH         ; 005ff002
    DEC ESI                             ; 005ff005
        ;   Label: LAB_005ff005
    TEST ESI,ESI                        ; 005ff006
    JLE 0x005ff026                      ; 005ff008 | LAB_005ff026
        ;   XREF to: 005ff026 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005ff00a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005ff00b | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ff010
    MOV dword ptr [ESP],EAX             ; 005ff013
    CMP EAX,-0x1                        ; 005ff016
    JZ 0x005ff026                       ; 005ff019 | LAB_005ff026
        ;   XREF to: 005ff026 (CONDITIONAL_JUMP)
    INC EBX                             ; 005ff01b
    MOV AL,byte ptr [ESP]               ; 005ff01c
    MOV byte ptr [EBX + -0x1],AL        ; 005ff01f
    CMP AL,0xa                          ; 005ff022
    JNZ 0x005ff005                      ; 005ff024 | LAB_005ff005
        ;   XREF to: 005ff005 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP],-0x1            ; 005ff026
        ;   Label: LAB_005ff026
    JNZ 0x005ff03a                      ; 005ff02a | LAB_005ff03a
        ;   XREF to: 005ff03a (CONDITIONAL_JUMP)
    CMP EBX,EBP                         ; 005ff02c
    JZ 0x005ff036                       ; 005ff02e | LAB_005ff036
        ;   XREF to: 005ff036 (CONDITIONAL_JUMP)
    TEST byte ptr [EDI + 0xc],0x20      ; 005ff030
    JZ 0x005ff03a                       ; 005ff034 | LAB_005ff03a
        ;   XREF to: 005ff03a (CONDITIONAL_JUMP)
    XOR EBP,EBP                         ; 005ff036
        ;   Label: LAB_005ff036
    JMP 0x005ff03d                      ; 005ff038 | LAB_005ff03d
        ;   XREF to: 005ff03d (UNCONDITIONAL_JUMP)
    MOV byte ptr [EBX],0x0              ; 005ff03a
        ;   Label: LAB_005ff03a
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff03d
        ;   Label: LAB_005ff03d
    MOV ESI,dword ptr [EDI + 0xc]       ; 005ff041
    OR ESI,EAX                          ; 005ff044
    MOV EAX,dword ptr [EDI + 0x10]      ; 005ff046
    PUSH EAX                            ; 005ff049
    MOV dword ptr [EDI + 0xc],ESI       ; 005ff04a
    CALL dword ptr [0x00684eec]         ; 005ff04d | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005ff053
    MOV EAX,EBP                         ; 005ff056
    ADD ESP,0x8                         ; 005ff058
    POP EBP                             ; 005ff05b
    POP EDI                             ; 005ff05c
    POP ESI                             ; 005ff05d
    POP EBX                             ; 005ff05e
    RET                                 ; 005ff05f

