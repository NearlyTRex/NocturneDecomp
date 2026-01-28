; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00471a70 (CDemonImage *this_ptr,uint red,uint green,uint blue)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   red
; uint             Stack[0xc]:4   green
; uint             Stack[0x10]:4   blue
;
; XREF[1]:
;   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 at 00471c7b
;
; Referenced Globals:
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_BlueBitPosition
;   int g_BlueScaleFactor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471a70
        ;   Label: core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
    PUSH ESI                            ; 00471a71
    PUSH EDI                            ; 00471a72
    MOV EDI,dword ptr [ESP + 0x14]      ; 00471a73
    MOV EBX,dword ptr [ESP + 0x18]      ; 00471a77
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00471a7b
    MOV ECX,dword ptr [0x02d01f28]      ; 00471a7f | g_RedScaleFactor
    MOV EAX,EDI                         ; 00471a85
    XOR EDX,EDX                         ; 00471a87
    DIV ECX                             ; 00471a89
    MOV EDI,EAX                         ; 00471a8b
    XOR EDX,EDX                         ; 00471a8d
    MOV EAX,EBX                         ; 00471a8f
    MOV EBX,dword ptr [0x02d01f34]      ; 00471a91 | g_GreenScaleFactor
    DIV EBX                             ; 00471a97
    MOV EBX,EAX                         ; 00471a99
    XOR EDX,EDX                         ; 00471a9b
    MOV EAX,ESI                         ; 00471a9d
    DIV dword ptr [0x02d01f40]          ; 00471a9f | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 00471aa5 | g_RedBitPosition
    SHL EDI,CL                          ; 00471aab
    MOV CL,byte ptr [0x02d01f30]        ; 00471aad | g_GreenBitPosition
    SHL EBX,CL                          ; 00471ab3
    MOV CL,byte ptr [0x02d01f3c]        ; 00471ab5 | g_BlueBitPosition
    OR EBX,EDI                          ; 00471abb
    SHL EAX,CL                          ; 00471abd
    OR EAX,EBX                          ; 00471abf
    POP EDI                             ; 00471ac1
    POP ESI                             ; 00471ac2
    POP EBX                             ; 00471ac3
    RET                                 ; 00471ac4

