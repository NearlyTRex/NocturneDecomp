; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(CPackedBitmap *this_ptr,_FILE *file_handle)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 at 0054b552
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f0f1
;   TerminatedCString s_Error_writing_PBM_0063f109
;   TerminatedCString s_anon_00680c9c
;   undefined4 s_PBG_00680ca0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b5c0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
    PUSH ESI                            ; 0054b5c1
    PUSH EDI                            ; 0054b5c2
    PUSH EBP                            ; 0054b5c3
    SUB ESP,0x1c                        ; 0054b5c4
    MOV EBX,dword ptr [ESP + 0x30]      ; 0054b5c7
    MOV EBP,dword ptr [ESP + 0x34]      ; 0054b5cb
    MOV ECX,0x4                         ; 0054b5cf
    MOV ESI,0x680c9c                    ; 0054b5d4 | = "PBM\032PBG\032"
    MOV EDI,ESP                         ; 0054b5d9
    PUSH EDI                            ; 0054b5db
    MOV EAX,ECX                         ; 0054b5dc
    SHR ECX,0x2                         ; 0054b5de
    MOVSD.REP ES:EDI,ESI                ; 0054b5e1 | = "PBM\032PBG\032"
    MOV CL,AL                           ; 0054b5e3
    AND CL,0x3                          ; 0054b5e5
    MOVSB.REP ES:EDI,ESI                ; 0054b5e8 | s_PBG_00680ca0
    POP EDI                             ; 0054b5ea
    MOV EAX,dword ptr [EBX + 0x18]      ; 0054b5eb
    MOV dword ptr [ESP + 0x4],EAX       ; 0054b5ee
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054b5f2
    XOR EDX,EDX                         ; 0054b5f5
    MOV dword ptr [ESP + 0x8],EAX       ; 0054b5f7
    MOV dword ptr [ESP + 0xc],EDX       ; 0054b5fb
    MOV dword ptr [ESP + 0x10],EDX      ; 0054b5ff
    MOV EAX,dword ptr [EBX + 0x18]      ; 0054b603
    DEC EAX                             ; 0054b606
    MOV dword ptr [ESP + 0x14],EAX      ; 0054b607
    PUSH EBP                            ; 0054b60b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054b60c
    PUSH 0x1                            ; 0054b60f
    DEC EAX                             ; 0054b611
    PUSH 0x1c                           ; 0054b612
    MOV dword ptr [ESP + 0x24],EAX      ; 0054b614
    LEA EAX,[ESP + 0xc]                 ; 0054b618
    PUSH EAX                            ; 0054b61c
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0054b61d
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054b622
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054b625
    PUSH EBP                            ; 0054b628
    INC EAX                             ; 0054b629
    PUSH EAX                            ; 0054b62a
    PUSH 0x4                            ; 0054b62b
    MOV ESI,dword ptr [EBX + 0x20]      ; 0054b62d
    PUSH ESI                            ; 0054b630
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0054b631
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054b636
    PUSH EBP                            ; 0054b639
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0054b63a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0054b63d
    PUSH 0x1                            ; 0054b640
    MOV EDX,dword ptr [EAX + EDI*0x4]   ; 0054b642
    PUSH EDX                            ; 0054b645
    MOV ECX,dword ptr [EBX + 0x14]      ; 0054b646
    PUSH ECX                            ; 0054b649
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0054b64a
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    MOV AH,byte ptr [EBP + 0xc]         ; 0054b64f
    ADD ESP,0x10                        ; 0054b652
    TEST AH,0x20                        ; 0054b655
    JNZ 0x0054b662                      ; 0054b658
        ;   XREF to: 0054b662 (CONDITIONAL_JUMP)  ; LAB_0054b662
    ADD ESP,0x1c                        ; 0054b65a
    POP EBP                             ; 0054b65d
    POP EDI                             ; 0054b65e
    POP ESI                             ; 0054b65f
    POP EBX                             ; 0054b660
    RET                                 ; 0054b661
    MOV EBX,0x63f0f1                    ; 0054b662 | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_0054b662
    MOV ESI,0x49a                       ; 0054b667
    PUSH 0x63f109                       ; 0054b66c | = "Error writing PBM"
    MOV dword ptr [0x02f0ca48],EBX      ; 0054b671 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0054b677 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b67d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054b682
    ADD ESP,0x1c                        ; 0054b685
    POP EBP                             ; 0054b688
    POP EDI                             ; 0054b689
    POP ESI                             ; 0054b68a
    POP EBX                             ; 0054b68b
    RET                                 ; 0054b68c

