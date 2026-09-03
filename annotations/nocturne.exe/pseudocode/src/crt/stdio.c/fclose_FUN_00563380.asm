; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fclose_FUN_00563380(_FILE *file_handle)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
;
; XREF[82]:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480 at 0042d57e
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90 at 0042ed7a
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00430210 at 004302a4
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 at 0042d2b6
;   cockpit_ckptutil.c_saveEdgeListFile_FUN_0042ee00 at 0042ef4f
;   cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5110 at 004f5171
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40 at 004f4ebe
;   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_004f4b30 at 004f4b5c
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0 at 004f56b3
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740 at 004f5824
;   ... and 72 more
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4 = 005671e4
;   undefined4 DAT_02de4e20
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c___CClose_FUN_005633c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563380
        ;   Label: crt_stdio.c_fclose_FUN_00563380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563381
    CALL dword ptr [0x005c1ad0]         ; 00563385 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0
    MOV EAX,[0x02de4e20]                ; 0056338b | DAT_02de4e20
    TEST EAX,EAX                        ; 00563390
    JNZ 0x005633a1                      ; 00563392
        ;   XREF to: 005633a1 (CONDITIONAL_JUMP)  ; LAB_005633a1
    CALL dword ptr [0x005c1ad4]         ; 00563394 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4
        ;   Label: LAB_00563394
    MOV EAX,0xffffffff                  ; 0056339a
    POP EBX                             ; 0056339f
    RET                                 ; 005633a0
    CMP EBX,dword ptr [EAX + 0x4]       ; 005633a1
        ;   Label: LAB_005633a1
    JZ 0x005633ae                       ; 005633a4
        ;   XREF to: 005633ae (CONDITIONAL_JUMP)  ; LAB_005633ae
    MOV EAX,dword ptr [EAX]             ; 005633a6
    TEST EAX,EAX                        ; 005633a8
    JZ 0x00563394                       ; 005633aa
        ;   XREF to: 00563394 (CONDITIONAL_JUMP)  ; LAB_00563394
    JMP 0x005633a1                      ; 005633ac
        ;   XREF to: 005633a1 (UNCONDITIONAL_JUMP)  ; LAB_005633a1
    CALL dword ptr [0x005c1ad4]         ; 005633ae | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4
        ;   Label: LAB_005633ae
    PUSH 0x1                            ; 005633b4
    PUSH EBX                            ; 005633b6
    CALL crt_unknown.c___CClose_FUN_005633c4 ; 005633b7
        ;   XREF to: 005633c4 (UNCONDITIONAL_CALL)  ; int crt_unknown.c___CClose_FUN_005633c4(_FILE * file_handle, int close_flags)
    ADD ESP,0x8                         ; 005633bc
    POP EBX                             ; 005633bf
    RET                                 ; 005633c0

