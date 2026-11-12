; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_vsprintf_FUN_005b7768(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[29]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90 at 00468aba
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880 at 004688ad
;   cockpit_drawsurf.cpp_FUN_004682a0 at 004682cc
;   cockpit_drawsurf.cpp_FUN_00468370 at 0046839c
;   cockpit_drawsurf.cpp_FUN_00468440 at 0046846c
;   cockpit_drawsurf.cpp_FUN_00468510 at 0046853c
;   cockpit_drawsurf.cpp_FUN_004685e0 at 0046860c
;   cockpit_drawsurf.cpp_FUN_004686b0 at 004686dd
;   cockpit_drawsurf.cpp_FUN_00468790 at 004687bd
;   cockpit_drawsurf.cpp_FUN_00468940 at 0046896b
;   ... and 19 more
;
; Called Functions:
;   crt_unknown.c_FUN_005bb050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7768
        ;   Label: crt_stdio.c_vsprintf_FUN_005b7768
    PUSH 0x5b7750                       ; 005b7769
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b776e
    PUSH EDX                            ; 005b7772
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b7773
    PUSH EBX                            ; 005b7777
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b7778
    PUSH ECX                            ; 005b777c
    CALL crt_unknown.c_FUN_005bb050     ; 005b777d
        ;   XREF to: 005bb050 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb050()
    ADD ESP,0x10                        ; 005b7782
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b7785
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 005b7789
    POP EBX                             ; 005b778d
    RET                                 ; 005b778e

