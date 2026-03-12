; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70(CDemonCamera *this_ptr,CVector3i *screen_pos,int alpha_index,CVector3i *world_pos)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   screen_pos
; int              Stack[0xc]:4   alpha_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 at 0044e48e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453a70
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
    PUSH EDI                            ; 00453a71
    PUSH EBP                            ; 00453a72
    SUB ESP,0x20                        ; 00453a73
    MOV EDI,dword ptr [ESP + 0x30]      ; 00453a76
    MOV ECX,dword ptr [ESP + 0x34]      ; 00453a7a
    MOV EBP,ESI                         ; 00453a7e
    MOV EAX,dword ptr [ECX + 0x8]       ; 00453a80
    MOV EDX,dword ptr [EDI + 0x1c8]     ; 00453a83
    MOV dword ptr [ESP + 0x8],EAX       ; 00453a89
    MOV EAX,dword ptr [ECX]             ; 00453a8d
    MOV EBX,dword ptr [EDI + 0x1c0]     ; 00453a8f
    SUB EAX,EDX                         ; 00453a95
    MOV EDX,dword ptr [ESP + 0x8]       ; 00453a97
    IMUL EDX                            ; 00453a9b
    IDIV EBX                            ; 00453a9d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00453a9f
    MOV ESI,EAX                         ; 00453aa3
    MOV dword ptr [ESP],EAX             ; 00453aa5
    MOV EAX,dword ptr [ECX + 0x4]       ; 00453aa8
    MOV ECX,dword ptr [EDI + 0x1cc]     ; 00453aab
    MOV EBX,dword ptr [EDI + 0x1c4]     ; 00453ab1
    SUB EAX,ECX                         ; 00453ab7
    MOV ECX,dword ptr [ESP + 0x38]      ; 00453ab9
    IMUL EDX                            ; 00453abd
    IDIV EBX                            ; 00453abf
    SHL ECX,0x2                         ; 00453ac1
    MOV EBX,EAX                         ; 00453ac4
    ADD ECX,EDI                         ; 00453ac6
    MOV dword ptr [ESP + 0x4],EAX       ; 00453ac8
    MOV EDX,ESI                         ; 00453acc
    MOV EAX,dword ptr [ECX + 0x136c]    ; 00453ace
    IMUL EDX                            ; 00453ad4
    SHRD EAX,EDX,0x10                   ; 00453ad6
    MOV dword ptr [ESP + 0x18],EAX      ; 00453ada
    MOV EDX,EBX                         ; 00453ade
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 00453ae0
    IMUL EDX                            ; 00453ae6
    SHRD EAX,EDX,0x10                   ; 00453ae8
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453aec
    ADD EDX,EAX                         ; 00453af0
    MOV dword ptr [ESP + 0x18],EDX      ; 00453af2
    MOV EAX,dword ptr [ECX + 0x142c]    ; 00453af6
    MOV EDX,dword ptr [ESP + 0x8]       ; 00453afc
    IMUL EDX                            ; 00453b00
    SHRD EAX,EDX,0x10                   ; 00453b02
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453b06
    ADD EDX,EAX                         ; 00453b0a
    MOV EAX,dword ptr [ESP + 0x38]      ; 00453b0c
    MOV dword ptr [ESP + 0x18],EAX      ; 00453b10
    MOV dword ptr [ESP + 0x1c],EDX      ; 00453b14
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453b18
    SHL EAX,0x2                         ; 00453b1c
    SUB EAX,EDX                         ; 00453b1f
    SHL EAX,0x2                         ; 00453b21
    ADD EDI,EAX                         ; 00453b24
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00453b26
    MOV EDX,dword ptr [EDI + 0x11ec]    ; 00453b2a
    ADD EAX,EDX                         ; 00453b30
    MOV dword ptr [ESP + 0xc],EAX       ; 00453b32
    MOV EDX,ESI                         ; 00453b36
    MOV EAX,dword ptr [ECX + 0x138c]    ; 00453b38
    IMUL EDX                            ; 00453b3e
    SHRD EAX,EDX,0x10                   ; 00453b40
    MOV dword ptr [ESP + 0x18],EAX      ; 00453b44
    MOV EDX,EBX                         ; 00453b48
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 00453b4a
    IMUL EDX                            ; 00453b50
    SHRD EAX,EDX,0x10                   ; 00453b52
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453b56
    ADD EDX,EAX                         ; 00453b5a
    MOV dword ptr [ESP + 0x18],EDX      ; 00453b5c
    MOV EAX,dword ptr [ECX + 0x144c]    ; 00453b60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00453b66
    IMUL EDX                            ; 00453b6a
    SHRD EAX,EDX,0x10                   ; 00453b6c
    ADD EAX,dword ptr [ESP + 0x18]      ; 00453b70
    MOV EDX,dword ptr [EDI + 0x11f0]    ; 00453b74
    ADD EDX,EAX                         ; 00453b7a
    MOV dword ptr [ESP + 0x10],EDX      ; 00453b7c
    MOV EDX,ESI                         ; 00453b80
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 00453b82
    IMUL EDX                            ; 00453b88
    SHRD EAX,EDX,0x10                   ; 00453b8a
    MOV ESI,EAX                         ; 00453b8e
    MOV EDX,EBX                         ; 00453b90
    MOV EAX,dword ptr [ECX + 0x140c]    ; 00453b92
    IMUL EDX                            ; 00453b98
    SHRD EAX,EDX,0x10                   ; 00453b9a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00453b9e
    ADD ESI,EAX                         ; 00453ba2
    MOV EAX,dword ptr [ECX + 0x146c]    ; 00453ba4
    IMUL EDX                            ; 00453baa
    SHRD EAX,EDX,0x10                   ; 00453bac
    MOV EDX,dword ptr [EDI + 0x11f4]    ; 00453bb0
    ADD EAX,ESI                         ; 00453bb6
    LEA ESI,[ESP + 0xc]                 ; 00453bb8
    ADD EDX,EAX                         ; 00453bbc
    MOV EDI,EBP                         ; 00453bbe
    MOV dword ptr [ESP + 0x14],EDX      ; 00453bc0
    MOVSD ES:EDI,ESI                    ; 00453bc4
    MOVSD ES:EDI,ESI                    ; 00453bc5
    MOVSD ES:EDI,ESI                    ; 00453bc6
    MOV EAX,EBP                         ; 00453bc7
    ADD ESP,0x20                        ; 00453bc9
    POP EBP                             ; 00453bcc
    POP EDI                             ; 00453bcd
    POP EBX                             ; 00453bce
    RET                                 ; 00453bcf

