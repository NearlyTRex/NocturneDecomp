; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_cramtex_cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord,int max_coord,int pixel_offset)
;
; Parameters:
; int              Stack[0xc]:4   min_coord
; int              Stack[0x10]:4   max_coord
; int              Stack[0x14]:4   pixel_offset
;
; Referenced Globals:
;   int g_CramCurrentAcceptableSize
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00447a80
        ;   Label: shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00447a85
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 00447a8a
    PUSH ESI                            ; 00447a8b
    MOV ECX,dword ptr [ESP + 0xc]       ; 00447a8c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00447a90
    MOV EBX,dword ptr [ESP + 0x14]      ; 00447a94
    SUB EDX,ECX                         ; 00447a98
    IMUL EDX,EBX                        ; 00447a9a
    MOV ESI,dword ptr [0x0084a884]      ; 00447a9d | g_CramCurrentAcceptableSize
    MOV EAX,EDX                         ; 00447aa3
    SAR EDX,0x1f                        ; 00447aa5
    IDIV ESI                            ; 00447aa8
    ADD EAX,ECX                         ; 00447aaa
    POP ESI                             ; 00447aac
    POP EBX                             ; 00447aad
    RET                                 ; 00447aae

