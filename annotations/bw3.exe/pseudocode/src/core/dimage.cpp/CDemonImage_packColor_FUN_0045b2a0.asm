; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045b2a0(CDemonImage *this_ptr,uint red,uint green,uint blue)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   red
; uint             Stack[0xc]:4   green
; uint             Stack[0x10]:4   blue
;
; XREF[1]:
;   core_dimage.cpp_FUN_0045b2fe at 0045b49a
;
; Referenced Globals:
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b2a0
        ;   Label: core_dimage.cpp_CDemonImage_packColor_FUN_0045b2a0
    PUSH ESI                            ; 0045b2a1
    PUSH EDI                            ; 0045b2a2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045b2a3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045b2a7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045b2ab
    MOV ECX,dword ptr [0x01c6af78]      ; 0045b2af | DAT_01c6af78
    MOV EAX,EDI                         ; 0045b2b5
    XOR EDX,EDX                         ; 0045b2b7
    DIV ECX                             ; 0045b2b9
    MOV EDI,EAX                         ; 0045b2bb
    XOR EDX,EDX                         ; 0045b2bd
    MOV EAX,EBX                         ; 0045b2bf
    MOV EBX,dword ptr [0x01c6af84]      ; 0045b2c1 | DAT_01c6af84
    DIV EBX                             ; 0045b2c7
    MOV EBX,EAX                         ; 0045b2c9
    XOR EDX,EDX                         ; 0045b2cb
    MOV EAX,ESI                         ; 0045b2cd
    DIV dword ptr [0x01c6af90]          ; 0045b2cf | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 0045b2d5 | DAT_01c6af74
    SHL EDI,CL                          ; 0045b2db
    MOV CL,byte ptr [0x01c6af80]        ; 0045b2dd | DAT_01c6af80
    SHL EBX,CL                          ; 0045b2e3
    MOV CL,byte ptr [0x01c6af8c]        ; 0045b2e5 | DAT_01c6af8c
    OR EBX,EDI                          ; 0045b2eb
    SHL EAX,CL                          ; 0045b2ed
    OR EAX,EBX                          ; 0045b2ef
    POP EDI                             ; 0045b2f1
    POP ESI                             ; 0045b2f2
    POP EBX                             ; 0045b2f3
    RET                                 ; 0045b2f4

