; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00468370(CDrawSurface *this_ptr,int x,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00469024
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00468310
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468370
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00468370
    PUSH ESI                            ; 00468371
    PUSH EDI                            ; 00468372
    SUB ESP,0x1004                      ; 00468373
    LEA EAX,[ESP + 0x1024]              ; 00468379
    MOV dword ptr [ESP + 0x1000],EAX    ; 00468380
    LEA EAX,[ESP + 0x1000]              ; 00468387
    PUSH EAX                            ; 0046838e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0046838f
    PUSH EDX                            ; 00468396
    LEA EAX,[ESP + 0x8]                 ; 00468397
    PUSH EAX                            ; 0046839b
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0046839c
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004683a1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 004683a4
    PUSH EBX                            ; 004683ab
    MOV ESI,dword ptr [ESP + 0x101c]    ; 004683ac
    PUSH ESI                            ; 004683b3
    LEA EAX,[ESP + 0x8]                 ; 004683b4
    PUSH EAX                            ; 004683b8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 004683b9
    XOR ECX,ECX                         ; 004683c0
    PUSH EDI                            ; 004683c2
    MOV dword ptr [ESP + 0x1010],ECX    ; 004683c3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00468310 ; 004683ca
        ;   XREF to: 00468310 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00468310(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 004683cf
    ADD ESP,0x1004                      ; 004683d2
    POP EDI                             ; 004683d8
    POP ESI                             ; 004683d9
    POP EBX                             ; 004683da
    RET                                 ; 004683db

