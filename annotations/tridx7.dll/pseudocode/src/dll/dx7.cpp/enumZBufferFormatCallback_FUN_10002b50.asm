; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HRESULT __stdcall dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50(DDPIXELFORMAT *lp_pixel_format,DDPIXELFORMAT *lp_context)
;
; Parameters:
; DDPIXELFORMAT *  Stack[0x4]:4   lp_pixel_format
; DDPIXELFORMAT *  Stack[0x8]:4   lp_context
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 1000283d
;
; Referenced Globals:
;   int g_ScreenBitDepth = 0x10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10002b50
        ;   Label: dll_dx7.cpp_enumZBufferFormatCallback_FUN_10002b50
    PUSH EDI                            ; 10002b51
    MOV ESI,dword ptr [ESP + 0xc]       ; 10002b52
    CMP dword ptr [ESI + 0x4],0x400     ; 10002b56
    JNZ 0x10002b97                      ; 10002b5d
        ;   XREF to: 10002b97 (CONDITIONAL_JUMP)  ; LAB_10002b97
    CMP dword ptr [0x1001417c],0x20     ; 10002b5f | g_ScreenBitDepth
    JNZ 0x10002b85                      ; 10002b66
        ;   XREF to: 10002b85 (CONDITIONAL_JUMP)  ; LAB_10002b85
    MOV EAX,dword ptr [ESI + 0xc]       ; 10002b68
    MOV EDI,dword ptr [ESP + 0x10]      ; 10002b6b
    CMP dword ptr [EDI + 0xc],EAX       ; 10002b6f
    JNC 0x10002b97                      ; 10002b72
        ;   XREF to: 10002b97 (CONDITIONAL_JUMP)  ; LAB_10002b97
    MOV ECX,0x8                         ; 10002b74
    MOVSD.REP ES:EDI,ESI                ; 10002b79
    MOV EAX,0x1                         ; 10002b7b
    POP EDI                             ; 10002b80
    POP ESI                             ; 10002b81
    RET 0x8                             ; 10002b82
    MOV EDI,dword ptr [ESP + 0x10]      ; 10002b85
        ;   Label: LAB_10002b85
    MOV ECX,0x8                         ; 10002b89
    MOVSD.REP ES:EDI,ESI                ; 10002b8e
    XOR EAX,EAX                         ; 10002b90
    POP EDI                             ; 10002b92
    POP ESI                             ; 10002b93
    RET 0x8                             ; 10002b94
    MOV EAX,0x1                         ; 10002b97
        ;   Label: LAB_10002b97
    POP EDI                             ; 10002b9c
    POP ESI                             ; 10002b9d
    RET 0x8                             ; 10002b9e

