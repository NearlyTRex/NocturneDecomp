; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 at 00575b64
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 at 0057702e
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579421
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 at 0057a8a1
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00575f60
        ;   Label: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00575f62
    PUSH EDX                            ; 00575f66
    CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0 ; 00575f67 | void core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet * this_ptr, FILE * file_handle)
        ;   XREF to: 00575bc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00575f6c
    RET                                 ; 00575f6f

