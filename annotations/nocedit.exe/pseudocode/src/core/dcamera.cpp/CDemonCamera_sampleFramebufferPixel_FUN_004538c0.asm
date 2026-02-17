; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0(CDemonCamera *this_ptr,SRenderVertex *vertex)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; SRenderVertex *  Stack[0x8]:4   vertex
;
; Referenced Globals:
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004538c0
        ;   Label: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004538c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004538c5
    TEST byte ptr [EAX + 0x13],0x80     ; 004538c9
    JZ 0x004538e1                       ; 004538cd
        ;   XREF to: 004538e1 (CONDITIONAL_JUMP)  ; LAB_004538e1
    MOV dword ptr [EAX + 0x28],0x0      ; 004538cf
    MOV EDX,dword ptr [EAX + 0x28]      ; 004538d6
    MOV dword ptr [EAX + 0x24],EDX      ; 004538d9
    MOV dword ptr [EAX + 0x20],EDX      ; 004538dc
    POP EBX                             ; 004538df
    RET                                 ; 004538e0
    PUSH ESI                            ; 004538e1
        ;   Label: LAB_004538e1
    MOV ECX,dword ptr [EAX + 0x14]      ; 004538e2
    MOV ESI,dword ptr [EBX + 0x144]     ; 004538e5
    SAR ECX,0x10                        ; 004538eb
    IMUL ECX,ESI                        ; 004538ee
    MOV EDX,dword ptr [EAX + 0x10]      ; 004538f1
    SAR EDX,0x10                        ; 004538f4
    ADD EDX,ECX                         ; 004538f7
    MOV ECX,dword ptr [EBX + 0x158]     ; 004538f9
    MOV EDX,dword ptr [ECX + EDX*0x4]   ; 004538ff
    MOV CL,byte ptr [0x02d01f24]        ; 00453902 | g_RedBitPosition
    MOV EBX,EDX                         ; 00453908
    SHR EBX,CL                          ; 0045390a
    MOV ESI,EDX                         ; 0045390c
    AND EBX,0xff                        ; 0045390e
    MOV CL,byte ptr [0x02d01f30]        ; 00453914 | g_GreenBitPosition
    SHL EBX,0x8                         ; 0045391a
    SHR ESI,CL                          ; 0045391d
    MOV CL,byte ptr [0x02d01f3c]        ; 0045391f | g_BlueBitPosition
    AND ESI,0xff                        ; 00453925
    MOV dword ptr [EAX + 0x20],EBX      ; 0045392b
    SHR EDX,CL                          ; 0045392e
    SHL ESI,0x8                         ; 00453930
    AND EDX,0xff                        ; 00453933
    MOV dword ptr [EAX + 0x24],ESI      ; 00453939
    SHL EDX,0x8                         ; 0045393c
    MOV dword ptr [EAX + 0x28],EDX      ; 0045393f
    POP ESI                             ; 00453942
    POP EBX                             ; 00453943
    RET                                 ; 00453944

