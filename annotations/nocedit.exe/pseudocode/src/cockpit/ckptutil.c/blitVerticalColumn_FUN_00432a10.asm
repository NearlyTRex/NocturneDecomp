; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_00432a10(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   unused_param
; int              Stack[0xc]:4   start_x
; int              Stack[0x10]:4   start_y
; int              Stack[0x14]:4   end_x
; int              Stack[0x18]:4   end_y
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432a10
        ;   Label: cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10
    PUSH ESI                            ; 00432a11
    PUSH EDI                            ; 00432a12
    PUSH EBP                            ; 00432a13
    SUB ESP,0xc                         ; 00432a14
    MOV EDI,dword ptr [ESP + 0x28]      ; 00432a17
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00432a1b
    MOV EBP,dword ptr [ESP + 0x34]      ; 00432a1f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00432a23
    SUB EAX,EDI                         ; 00432a27
    INC EAX                             ; 00432a29
    MOV EDX,dword ptr [ESP + 0x20]      ; 00432a2a
    MOV dword ptr [ESP + 0x4],EAX       ; 00432a2e
    TEST EDX,EDX                        ; 00432a32
    JNZ 0x00432a48                      ; 00432a34
        ;   XREF to: 00432a48 (CONDITIONAL_JUMP)  ; LAB_00432a48
    LEA EAX,[EAX]                       ; 00432a36
    LEA EDX,[EDX]                       ; 00432a3c
    ADD ESP,0xc                         ; 00432a40
        ;   Label: LAB_00432a40
    POP EBP                             ; 00432a43
    POP EDI                             ; 00432a44
    POP ESI                             ; 00432a45
    POP EBX                             ; 00432a46
    RET                                 ; 00432a47
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 00432a48
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
        ;   Label: LAB_00432a48
    MOV ECX,dword ptr [0x0067939c]      ; 00432a4d | g_BitsPerPixel
    MOV dword ptr [ESP + 0x8],EAX       ; 00432a53
    LEA EAX,[ESI*0x4 + 0x0]             ; 00432a57
    CMP ECX,0x8                         ; 00432a5e
    JNZ 0x00432aa1                      ; 00432a61
        ;   XREF to: 00432aa1 (CONDITIONAL_JUMP)  ; LAB_00432aa1
    MOV EBX,ESI                         ; 00432a63
    CMP ESI,EBP                         ; 00432a65
    JGE 0x00432a40                      ; 00432a67
        ;   XREF to: 00432a40 (CONDITIONAL_JUMP)  ; LAB_00432a40
    MOV ESI,EAX                         ; 00432a69
    MOV EAX,[0x00679394]                ; 00432a6b | g_WindowWidth
        ;   Label: LAB_00432a6b
    IMUL EAX,EBX                        ; 00432a70
    MOV EDX,dword ptr [ESP + 0x20]      ; 00432a73
    MOV ECX,dword ptr [ESP + 0x4]       ; 00432a77
    ADD EAX,EDI                         ; 00432a7b
    PUSH ECX                            ; 00432a7d
    ADD EDX,EAX                         ; 00432a7e
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 00432a80 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDX                            ; 00432a86
    ADD EAX,EDI                         ; 00432a87
    PUSH EAX                            ; 00432a89
    ADD ESI,0x4                         ; 00432a8a
    INC EBX                             ; 00432a8d
    CALL dword ptr [ESP + 0x14]         ; 00432a8e
    ADD ESP,0xc                         ; 00432a92
    CMP EBX,EBP                         ; 00432a95
    JL 0x00432a6b                       ; 00432a97
        ;   XREF to: 00432a6b (CONDITIONAL_JUMP)  ; LAB_00432a6b
    ADD ESP,0xc                         ; 00432a99
    POP EBP                             ; 00432a9c
    POP EDI                             ; 00432a9d
    POP ESI                             ; 00432a9e
    POP EBX                             ; 00432a9f
    RET                                 ; 00432aa0
    MOV EBX,ESI                         ; 00432aa1
        ;   Label: LAB_00432aa1
    CMP ESI,EBP                         ; 00432aa3
    JGE 0x00432a40                      ; 00432aa5
        ;   XREF to: 00432a40 (CONDITIONAL_JUMP)  ; LAB_00432a40
    LEA EDX,[EDI + EDI*0x1]             ; 00432aa7
    MOV ESI,EAX                         ; 00432aaa
    MOV dword ptr [ESP],EDX             ; 00432aac
    MOV EAX,[0x00679394]                ; 00432aaf | g_WindowWidth
        ;   Label: LAB_00432aaf
    IMUL EAX,EBX                        ; 00432ab4
    MOV EDX,dword ptr [ESP + 0x20]      ; 00432ab7
    ADD EAX,EDI                         ; 00432abb
    MOV ECX,dword ptr [ESP]             ; 00432abd
    ADD EAX,EDX                         ; 00432ac0
    MOV EDX,dword ptr [ESI + 0x2cf6a9c] ; 00432ac2 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,ECX                         ; 00432ac8
    MOV ECX,dword ptr [ESP + 0x4]       ; 00432aca
    PUSH ECX                            ; 00432ace
    PUSH EAX                            ; 00432acf
    PUSH EDX                            ; 00432ad0
    ADD ESI,0x4                         ; 00432ad1
    INC EBX                             ; 00432ad4
    CALL dword ptr [ESP + 0x14]         ; 00432ad5
    ADD ESP,0xc                         ; 00432ad9
    CMP EBX,EBP                         ; 00432adc
    JL 0x00432aaf                       ; 00432ade
        ;   XREF to: 00432aaf (CONDITIONAL_JUMP)  ; LAB_00432aaf
    ADD ESP,0xc                         ; 00432ae0
    POP EBP                             ; 00432ae3
    POP EDI                             ; 00432ae4
    POP ESI                             ; 00432ae5
    POP EBX                             ; 00432ae6
    RET                                 ; 00432ae7

