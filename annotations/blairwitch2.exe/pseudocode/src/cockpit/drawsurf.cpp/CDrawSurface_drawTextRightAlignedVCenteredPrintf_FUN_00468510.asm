; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_00468510(CDrawSurface *this_ptr,int x,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00469068
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004684b0
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468510
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_00468510
    PUSH ESI                            ; 00468511
    PUSH EDI                            ; 00468512
    SUB ESP,0x1004                      ; 00468513
    LEA EAX,[ESP + 0x1024]              ; 00468519
    MOV dword ptr [ESP + 0x1000],EAX    ; 00468520
    LEA EAX,[ESP + 0x1000]              ; 00468527
    PUSH EAX                            ; 0046852e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0046852f
    PUSH EDX                            ; 00468536
    LEA EAX,[ESP + 0x8]                 ; 00468537
    PUSH EAX                            ; 0046853b
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0046853c
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00468541
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00468544
    PUSH EBX                            ; 0046854b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0046854c
    PUSH ESI                            ; 00468553
    LEA EAX,[ESP + 0x8]                 ; 00468554
    PUSH EAX                            ; 00468558
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00468559
    XOR ECX,ECX                         ; 00468560
    PUSH EDI                            ; 00468562
    MOV dword ptr [ESP + 0x1010],ECX    ; 00468563
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004684b0 ; 0046856a
        ;   XREF to: 004684b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004684b0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046856f
    ADD ESP,0x1004                      ; 00468572
    POP EDI                             ; 00468578
    POP ESI                             ; 00468579
    POP EBX                             ; 0046857a
    RET                                 ; 0046857b

