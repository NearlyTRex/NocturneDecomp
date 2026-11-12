; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00454520(CDemonCamera *this_ptr,int param_2)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454520
        ;   Label: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00454520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454521
    MOV EAX,dword ptr [ESP + 0xc]       ; 00454525
    TEST byte ptr [EAX + 0x13],0x80     ; 00454529
    JZ 0x00454541                       ; 0045452d
        ;   XREF to: 00454541 (CONDITIONAL_JUMP)  ; LAB_00454541
    MOV dword ptr [EAX + 0x28],0x0      ; 0045452f
    MOV EDX,dword ptr [EAX + 0x28]      ; 00454536
    MOV dword ptr [EAX + 0x24],EDX      ; 00454539
    MOV dword ptr [EAX + 0x20],EDX      ; 0045453c
    POP EBX                             ; 0045453f
    RET                                 ; 00454540
    PUSH ESI                            ; 00454541
        ;   Label: LAB_00454541
    MOV ECX,dword ptr [EAX + 0x14]      ; 00454542
    MOV ESI,dword ptr [EBX + 0x144]     ; 00454545
    SAR ECX,0x10                        ; 0045454b
    IMUL ECX,ESI                        ; 0045454e
    MOV EDX,dword ptr [EAX + 0x10]      ; 00454551
    SAR EDX,0x10                        ; 00454554
    ADD EDX,ECX                         ; 00454557
    MOV ECX,dword ptr [EBX + 0x158]     ; 00454559
    MOV EDX,dword ptr [ECX + EDX*0x4]   ; 0045455f
    MOV CL,byte ptr [0x01c4e9d4]        ; 00454562 | DAT_01c4e9d4
    MOV EBX,EDX                         ; 00454568
    SHR EBX,CL                          ; 0045456a
    MOV ESI,EDX                         ; 0045456c
    AND EBX,0xff                        ; 0045456e
    MOV CL,byte ptr [0x01c4e9e0]        ; 00454574 | DAT_01c4e9e0
    SHL EBX,0x8                         ; 0045457a
    SHR ESI,CL                          ; 0045457d
    MOV CL,byte ptr [0x01c4e9ec]        ; 0045457f | DAT_01c4e9ec
    AND ESI,0xff                        ; 00454585
    MOV dword ptr [EAX + 0x20],EBX      ; 0045458b
    SHR EDX,CL                          ; 0045458e
    SHL ESI,0x8                         ; 00454590
    AND EDX,0xff                        ; 00454593
    MOV dword ptr [EAX + 0x24],ESI      ; 00454599
    SHL EDX,0x8                         ; 0045459c
    MOV dword ptr [EAX + 0x28],EDX      ; 0045459f
    POP ESI                             ; 004545a2
    POP EBX                             ; 004545a3
    RET                                 ; 004545a4

