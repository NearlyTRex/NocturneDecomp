; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539040(CPackedBitmapSet *param_1,undefined4 param_2,char *param_3,int param_4,int param_5 ,int param_6)
;
;
; XREF[1]:
;   FUN_00539090 at 005390ae
;
; Called Functions:
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_00538750
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00538930
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539040
        ;   Label: FUN_00539040
    PUSH ESI                            ; 00539041
    PUSH EDI                            ; 00539042
    MOV EBX,dword ptr [ESP + 0x10]      ; 00539043
    PUSH EBX                            ; 00539047
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990 ; 00539048
        ;   XREF to: 00538990 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0053904d
    PUSH -0x1                           ; 00539050
    MOV EDX,dword ptr [ESP + 0x24]      ; 00539052
    PUSH EDX                            ; 00539056
    MOV ECX,dword ptr [ESP + 0x24]      ; 00539057
    PUSH ECX                            ; 0053905b
    MOV ESI,dword ptr [ESP + 0x24]      ; 0053905c
    PUSH ESI                            ; 00539060
    MOV EDI,dword ptr [ESP + 0x24]      ; 00539061
    PUSH EDI                            ; 00539065
    PUSH EBX                            ; 00539066
    CALL cockpit_pkbitmap.cpp_loadPBGFile_FUN_00538750 ; 00539067
        ;   XREF to: 00538750 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_loadPBGFile_FUN_00538750(CPackedBitmapSet * bitmap_set_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x18                        ; 0053906c
    PUSH EDI                            ; 0053906f
    PUSH EBX                            ; 00539070
    MOV dword ptr [EBX + 0x4],EAX       ; 00539071
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0 ; 00539074
        ;   XREF to: 005392b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00539079
    PUSH EBX                            ; 0053907c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00538930 ; 0053907d
        ;   XREF to: 00538930 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00538930(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00539082
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00539085
    MOV dword ptr [EBX + 0x24],EAX      ; 00539089
    POP EDI                             ; 0053908c
    POP ESI                             ; 0053908d
    POP EBX                             ; 0053908e
    RET                                 ; 0053908f

