; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910(CPackedBitmap * this_ptr, int post_load_processing)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   post_load_processing
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 at 0054b503
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054b910
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054b914
    PUSH EDX                            ; 0054b918
    PUSH EAX                            ; 0054b919
    PUSH EAX                            ; 0054b91a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 ; 0054b91b | void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860(CPackedBitmap * this_ptr, char * filename, int post_load_processing)
        ;   XREF to: 0054b860 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054b920
    RET                                 ; 0054b923

