; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_stdio_c_sprintf_FUN_00563c90(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[159]:
;   cockpit_ckptutil.c_FUN_0042eb90 at 0042ebce
;   cockpit_ckptutil.c_FUN_0042ee00 at 0042ee3e
;   cockpit_ckptutil.c_FUN_0042f050 at 0042f0c8
;   cockpit_ckptutil.c_FUN_00430210 at 0043029b
;   cockpit_ckptutil.c_FUN_004303d0 at 004304cc
;   cockpit_ckptutil.c_FUN_00430630 at 0043073b
;   cockpit_ckptutil.c_FUN_00431260 at 00431387
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480 at 0042d552
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 at 0042d27b
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0 at 004f48fd
;   ... and 149 more
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563c90
        ;   Label: crt_stdio.c_sprintf_FUN_00563c90
    SUB ESP,0x4                         ; 00563c91
    LEA EAX,[ESP + 0x14]                ; 00563c94
    MOV dword ptr [ESP],EAX             ; 00563c98
    MOV EAX,ESP                         ; 00563c9b
    PUSH EAX                            ; 00563c9d
    MOV EDX,dword ptr [ESP + 0x14]      ; 00563c9e
    PUSH EDX                            ; 00563ca2
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563ca3
    PUSH EBX                            ; 00563ca7
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00563ca8
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 00563cad
    ADD ESP,0x4                         ; 00563cb0
    POP EBX                             ; 00563cb3
    RET                                 ; 00563cb4

