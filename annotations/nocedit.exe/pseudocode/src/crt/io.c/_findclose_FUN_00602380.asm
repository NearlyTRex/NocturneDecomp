; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__findclose_FUN_00602380(HANDLE find_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   find_handle
;
; XREF[1]:
;   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 at 005dc44d
;
; Referenced Globals:
;   FIND_CLOSE_FUNC* g_FindCloseFunc = 00211d78
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00602380
        ;   Label: crt_io.c__findclose_FUN_00602380
    PUSH EDX                            ; 00602384
    CALL dword ptr CS:[0x611548]        ; 00602385 | g_FindCloseFunc
    CMP EAX,0x1                         ; 0060238c
    SETZ AL                             ; 0060238f
    AND EAX,0xff                        ; 00602392
    DEC EAX                             ; 00602397
    RET                                 ; 00602398

