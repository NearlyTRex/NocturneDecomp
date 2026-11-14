; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00450670(CDemonCamera *this_ptr,int param_2)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af8c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450670
        ;   Label: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00450670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00450671
    MOV EAX,dword ptr [ESP + 0xc]       ; 00450675
    TEST byte ptr [EAX + 0x13],0x80     ; 00450679
    JZ 0x00450691                       ; 0045067d
        ;   XREF to: 00450691 (CONDITIONAL_JUMP)  ; LAB_00450691
    MOV dword ptr [EAX + 0x28],0x0      ; 0045067f
    MOV EDX,dword ptr [EAX + 0x28]      ; 00450686
    MOV dword ptr [EAX + 0x24],EDX      ; 00450689
    MOV dword ptr [EAX + 0x20],EDX      ; 0045068c
    POP EBX                             ; 0045068f
    RET                                 ; 00450690
    PUSH ESI                            ; 00450691
        ;   Label: LAB_00450691
    MOV ECX,dword ptr [EAX + 0x14]      ; 00450692
    MOV ESI,dword ptr [EBX + 0x144]     ; 00450695
    SAR ECX,0x10                        ; 0045069b
    IMUL ECX,ESI                        ; 0045069e
    MOV EDX,dword ptr [EAX + 0x10]      ; 004506a1
    SAR EDX,0x10                        ; 004506a4
    ADD EDX,ECX                         ; 004506a7
    MOV ECX,dword ptr [EBX + 0x158]     ; 004506a9
    MOV EDX,dword ptr [ECX + EDX*0x4]   ; 004506af
    MOV CL,byte ptr [0x01c6af74]        ; 004506b2 | DAT_01c6af74
    MOV EBX,EDX                         ; 004506b8
    SHR EBX,CL                          ; 004506ba
    MOV ESI,EDX                         ; 004506bc
    AND EBX,0xff                        ; 004506be
    MOV CL,byte ptr [0x01c6af80]        ; 004506c4 | DAT_01c6af80
    SHL EBX,0x8                         ; 004506ca
    SHR ESI,CL                          ; 004506cd
    MOV CL,byte ptr [0x01c6af8c]        ; 004506cf | DAT_01c6af8c
    AND ESI,0xff                        ; 004506d5
    MOV dword ptr [EAX + 0x20],EBX      ; 004506db
    SHR EDX,CL                          ; 004506de
    SHL ESI,0x8                         ; 004506e0
    AND EDX,0xff                        ; 004506e3
    MOV dword ptr [EAX + 0x24],ESI      ; 004506e9
    SHL EDX,0x8                         ; 004506ec
    MOV dword ptr [EAX + 0x28],EDX      ; 004506ef
    POP ESI                             ; 004506f2
    POP EBX                             ; 004506f3
    RET                                 ; 004506f4

