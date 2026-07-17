; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl dll_dx7_cpp_getMipLevelPtr_FUN_10003a30(int mip_size)
;
; Parameters:
; int              Stack[0x4]:4   mip_size
;
; XREF[2]:
;   dll_dx7.cpp_convertMipTo16Bit_FUN_10003d90 at 10003d9c
;   dll_dx7.cpp_copyMipTo32Bit_FUN_10003e40 at 10003e4c
;
; Referenced Globals:
;   TerminatedCString s_Can_t_get_source_size_10016ab8
;   uint[87381] g_ExpandedTexture
;   undefined4 g_ExternalRendererBridge.texture_dimension
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10003a30
        ;   Label: dll_dx7.cpp_getMipLevelPtr_FUN_10003a30
    MOV EAX,[0x10226900]                ; 10003a31 | g_ExternalRendererBridge.texture_dimension
    PUSH ESI                            ; 10003a36
    MOV EBX,0x101b88e0                  ; 10003a37 | g_ExpandedTexture
    MOV ESI,dword ptr [ESP + 0xc]       ; 10003a3c
    PUSH EDI                            ; 10003a40
    MOV EDI,dword ptr [EAX]             ; 10003a41
    CMP EDI,ESI                         ; 10003a43
    JZ 0x10003a6e                       ; 10003a45
        ;   XREF to: 10003a6e (CONDITIONAL_JUMP)  ; LAB_10003a6e
    MOV EAX,EDI                         ; 10003a47
        ;   Label: LAB_10003a47
    IMUL EAX,EDI                        ; 10003a49
    LEA EBX,[EBX + EAX*0x4]             ; 10003a4c
    MOV EAX,EDI                         ; 10003a4f
    CDQ                                 ; 10003a51
    SUB EAX,EDX                         ; 10003a52
    SAR EAX,0x1                         ; 10003a54
    MOV EDI,EAX                         ; 10003a57
    TEST EDI,EDI                        ; 10003a59
    JNZ 0x10003a6a                      ; 10003a5b
        ;   XREF to: 10003a6a (CONDITIONAL_JUMP)  ; LAB_10003a6a
    PUSH 0x10016ab8                     ; 10003a5d | = "Can't get source size"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10003a62
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    CMP EDI,ESI                         ; 10003a6a
        ;   Label: LAB_10003a6a
    JNZ 0x10003a47                      ; 10003a6c
        ;   XREF to: 10003a47 (CONDITIONAL_JUMP)  ; LAB_10003a47
    MOV EAX,EBX                         ; 10003a6e | g_ExpandedTexture
        ;   Label: LAB_10003a6e
    POP EDI                             ; 10003a70
    POP ESI                             ; 10003a71
    POP EBX                             ; 10003a72
    RET                                 ; 10003a73

