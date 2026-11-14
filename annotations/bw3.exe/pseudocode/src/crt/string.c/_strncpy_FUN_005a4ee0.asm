; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c__strncpy_FUN_005a4ee0(char *dest,char *src,SIZE_T count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   count
;
; XREF[15]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0 at 0050f2ac
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90 at 00510f9f
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aad43
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490 at 004aa60e
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c04c8
;   core_netgame.cpp_CNetGame_processChatOut_FUN_005064d0 at 005065cf
;   crt_unknown.c_FUN_005aaed4 at 005ab1bb
;   crt_unknown.c_FUN_005aee94 at 005aeeca
;   crt_unknown.c_FUN_005b0a70 at 005b0abe
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00465cf0 at 00465d1b
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4ee0
        ;   Label: crt_string.c__strncpy_FUN_005a4ee0
    PUSH ESI                            ; 005a4ee1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a4ee2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a4ee6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a4eea
    MOV ESI,EAX                         ; 005a4eee
    TEST EDX,EDX                        ; 005a4ef0
    JZ 0x005a4f03                       ; 005a4ef2
        ;   XREF to: 005a4f03 (CONDITIONAL_JUMP)  ; LAB_005a4f03
    CMP byte ptr [EBX],0x0              ; 005a4ef4
        ;   Label: LAB_005a4ef4
    JZ 0x005a4f03                       ; 005a4ef7
        ;   XREF to: 005a4f03 (CONDITIONAL_JUMP)  ; LAB_005a4f03
    INC EAX                             ; 005a4ef9
    MOV CL,byte ptr [EBX]               ; 005a4efa
    INC EBX                             ; 005a4efc
    MOV byte ptr [EAX + -0x1],CL        ; 005a4efd
    DEC EDX                             ; 005a4f00
    JNZ 0x005a4ef4                      ; 005a4f01
        ;   XREF to: 005a4ef4 (CONDITIONAL_JUMP)  ; LAB_005a4ef4
    XOR EBX,EBX                         ; 005a4f03
        ;   Label: LAB_005a4f03
    TEST EDX,EDX                        ; 005a4f05
        ;   Label: LAB_005a4f05
    JZ 0x005a4f10                       ; 005a4f07
        ;   XREF to: 005a4f10 (CONDITIONAL_JUMP)  ; LAB_005a4f10
    INC EAX                             ; 005a4f09
    DEC EDX                             ; 005a4f0a
    MOV byte ptr [EAX + -0x1],BL        ; 005a4f0b
    JMP 0x005a4f05                      ; 005a4f0e
        ;   XREF to: 005a4f05 (UNCONDITIONAL_JUMP)  ; LAB_005a4f05
    MOV EAX,ESI                         ; 005a4f10
        ;   Label: LAB_005a4f10
    POP ESI                             ; 005a4f12
    POP EBX                             ; 005a4f13
    RET                                 ; 005a4f14

