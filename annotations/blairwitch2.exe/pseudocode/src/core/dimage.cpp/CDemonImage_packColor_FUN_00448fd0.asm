; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage *this_ptr,uint red,uint green,uint blue)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   red
; uint             Stack[0xc]:4   green
; uint             Stack[0x10]:4   blue
;
; XREF[1]:
;   core_dimage.cpp_CDemonImage_load_FUN_00449030 at 004491ca
;
; Referenced Globals:
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448fd0
        ;   Label: core_dimage.cpp_CDemonImage_packColor_FUN_00448fd0
    PUSH ESI                            ; 00448fd1
    PUSH EDI                            ; 00448fd2
    MOV EDI,dword ptr [ESP + 0x14]      ; 00448fd3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00448fd7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00448fdb
    MOV ECX,dword ptr [0x01c35818]      ; 00448fdf | g_RedScaleFactor
    MOV EAX,EDI                         ; 00448fe5
    XOR EDX,EDX                         ; 00448fe7
    DIV ECX                             ; 00448fe9
    MOV EDI,EAX                         ; 00448feb
    XOR EDX,EDX                         ; 00448fed
    MOV EAX,EBX                         ; 00448fef
    MOV EBX,dword ptr [0x01c35824]      ; 00448ff1 | g_GreenScaleFactor
    DIV EBX                             ; 00448ff7
    MOV EBX,EAX                         ; 00448ff9
    XOR EDX,EDX                         ; 00448ffb
    MOV EAX,ESI                         ; 00448ffd
    DIV dword ptr [0x01c35830]          ; 00448fff | g_BlueScaleFactor
    MOV CL,byte ptr [0x01c35814]        ; 00449005 | g_RedBitPosition
    SHL EDI,CL                          ; 0044900b
    MOV CL,byte ptr [0x01c35820]        ; 0044900d | g_GreenBitPosition
    SHL EBX,CL                          ; 00449013
    MOV CL,byte ptr [0x01c3582c]        ; 00449015 | g_BlueBitPosition
    OR EBX,EDI                          ; 0044901b
    SHL EAX,CL                          ; 0044901d
    OR EAX,EBX                          ; 0044901f
    POP EDI                             ; 00449021
    POP ESI                             ; 00449022
    POP EBX                             ; 00449023
    RET                                 ; 00449024

