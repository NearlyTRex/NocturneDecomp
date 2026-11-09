; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_dimage_cpp_FUN_00448fd0(undefined4 param_1,uint param_2,uint param_3,uint param_4)
;
;
; XREF[1]:
;   core_dimage.cpp_FUN_0044902e at 004491ca
;
; Referenced Globals:
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448fd0
        ;   Label: core_dimage.cpp_FUN_00448fd0
    PUSH ESI                            ; 00448fd1
    PUSH EDI                            ; 00448fd2
    MOV EDI,dword ptr [ESP + 0x14]      ; 00448fd3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00448fd7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00448fdb
    MOV ECX,dword ptr [0x01c35818]      ; 00448fdf | DAT_01c35818
    MOV EAX,EDI                         ; 00448fe5
    XOR EDX,EDX                         ; 00448fe7
    DIV ECX                             ; 00448fe9
    MOV EDI,EAX                         ; 00448feb
    XOR EDX,EDX                         ; 00448fed
    MOV EAX,EBX                         ; 00448fef
    MOV EBX,dword ptr [0x01c35824]      ; 00448ff1 | DAT_01c35824
    DIV EBX                             ; 00448ff7
    MOV EBX,EAX                         ; 00448ff9
    XOR EDX,EDX                         ; 00448ffb
    MOV EAX,ESI                         ; 00448ffd
    DIV dword ptr [0x01c35830]          ; 00448fff | DAT_01c35830
    MOV CL,byte ptr [0x01c35814]        ; 00449005 | DAT_01c35814
    SHL EDI,CL                          ; 0044900b
    MOV CL,byte ptr [0x01c35820]        ; 0044900d | DAT_01c35820
    SHL EBX,CL                          ; 00449013
    MOV CL,byte ptr [0x01c3582c]        ; 00449015 | DAT_01c3582c
    OR EBX,EDI                          ; 0044901b
    SHL EAX,CL                          ; 0044901d
    OR EAX,EBX                          ; 0044901f
    POP EDI                             ; 00449021
    POP ESI                             ; 00449022
    POP EBX                             ; 00449023
    RET                                 ; 00449024

