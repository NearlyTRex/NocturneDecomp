; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890 at 0054a896
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 at 0054b1a2
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 at 0054b86a
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 at 0054b6a0
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 at 0054b00d
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063eeb8
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063eed0
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
;   crt_memory.c_free_FUN_005fe659
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a8e0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
    PUSH ESI                            ; 0054a8e1
    PUSH EDI                            ; 0054a8e2
    PUSH EBP                            ; 0054a8e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054a8e4
    MOV EDX,dword ptr [EBX + 0x14]      ; 0054a8e8
    TEST EDX,EDX                        ; 0054a8eb
    JNZ 0x0054a91f                      ; 0054a8ed
        ;   XREF to: 0054a91f (CONDITIONAL_JUMP)  ; LAB_0054a91f
    MOV ESI,0x63eed0                    ; 0054a8ef | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_0054a8ef
    MOV EBP,dword ptr [EBX + 0x20]      ; 0054a8f4
    MOV EDI,0x99                        ; 0054a8f7
    PUSH EBP                            ; 0054a8fc
    MOV dword ptr [0x0067d20c],ESI      ; 0054a8fd | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 0054a903 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 0054a909
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0054a90e
    PUSH EBX                            ; 0054a911
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0 ; 0054a912
        ;   XREF to: 0054a8b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054a917
    POP EBP                             ; 0054a91a
    POP EDI                             ; 0054a91b
    POP ESI                             ; 0054a91c
    POP EBX                             ; 0054a91d
    RET                                 ; 0054a91e
    PUSH 0x98                           ; 0054a91f
        ;   Label: LAB_0054a91f
    PUSH 0x63eeb8                       ; 0054a924 | = "..\\cockpit\\pkbitmap.cpp"
    PUSH EDX                            ; 0054a929
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0054a92a
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054a92f
    JMP 0x0054a8ef                      ; 0054a932
        ;   XREF to: 0054a8ef (UNCONDITIONAL_JUMP)  ; LAB_0054a8ef

