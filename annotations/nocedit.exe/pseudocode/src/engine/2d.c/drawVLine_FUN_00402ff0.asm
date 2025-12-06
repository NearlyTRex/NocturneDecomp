; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   y2
;
; XREF[7]:
;   core_msnedit.cpp_FUN_0053c4f0 at 0053c694
;   core_script.cpp_FUN_005645d0 at 0056471d
;   engine_2d.c_drawRect_FUN_00403120 at 0040314d
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 at 004a1081
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 at 004a06b9
;   shape_edittool.cpp_draw3DBorder_FUN_004a58f0 at 004a592c
;   shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0 at 004a5a69
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00613203
;   TerminatedCString s_vLine_invalid_bitsPerPix_00613212
;   int g_BitsPerPixel = 0x8
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   ushort[256] g_ColorTable16
;   uint[256] g_ColorTable32
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402ff0
        ;   Label: engine_2d.c_drawVLine_FUN_00402ff0
    PUSH ESI                            ; 00402ff1
    PUSH EDI                            ; 00402ff2
    PUSH EBP                            ; 00402ff3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00402ff4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00402ff8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00402ffc
    CMP ESI,dword ptr [0x02d02558]      ; 00403000 | int g_ClipLeft
    JL 0x004030b0                       ; 00403006 | LAB_004030b0
        ;   XREF to: 004030b0 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02560]      ; 0040300c | int g_ClipRight
    JG 0x004030b0                       ; 00403012 | LAB_004030b0
        ;   XREF to: 004030b0 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02d0255c]      ; 00403018 | int g_ClipTop
    CMP EAX,EDI                         ; 0040301e
    JGE 0x00403024                      ; 00403020 | LAB_00403024
        ;   XREF to: 00403024 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 00403022
    MOV EBP,dword ptr [0x02d02564]      ; 00403024 | int g_ClipBottom
        ;   Label: LAB_00403024
    CMP EDX,EBP                         ; 0040302a
    JLE 0x00403030                      ; 0040302c | LAB_00403030
        ;   XREF to: 00403030 (CONDITIONAL_JUMP)
    MOV EDX,EBP                         ; 0040302e
    CMP EAX,EDX                         ; 00403030
        ;   Label: LAB_00403030
    JG 0x004030b0                       ; 00403032 | LAB_004030b0
        ;   XREF to: 004030b0 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x0067939c]      ; 00403038 | int g_BitsPerPixel
    LEA ECX,[EDX*0x4 + 0x0]             ; 0040303e
    LEA EBP,[EAX*0x4 + 0x0]             ; 00403045
    CMP EBX,0x10                        ; 0040304c
    JNC 0x004030e7                      ; 0040304f | LAB_004030e7
        ;   XREF to: 004030e7 (CONDITIONAL_JUMP)
    CMP EBX,0x8                         ; 00403055
    JNZ 0x004030ee                      ; 00403058 | LAB_004030ee
        ;   XREF to: 004030ee (CONDITIONAL_JUMP)
    MOV EDI,ECX                         ; 0040305e
    MOV EDX,EBP                         ; 00403060
    CMP EDX,EDI                         ; 00403062
        ;   Label: LAB_00403062
    JG 0x004030b0                       ; 00403064 | LAB_004030b0
        ;   XREF to: 004030b0 (CONDITIONAL_JUMP)
    MOV BL,byte ptr [0x02d02570]        ; 00403066 | int g_ActiveRenderColor
    MOV ECX,dword ptr [EDX + 0x2cf6a9c] ; 0040306c | void *[1024] g_ScreenBufferArray
    ADD EDX,0x4                         ; 00403072
    INC EAX                             ; 00403075
    MOV byte ptr [ECX + ESI*0x1],BL     ; 00403076
    JMP 0x00403062                      ; 00403079 | LAB_00403062
        ;   XREF to: 00403062 (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x02d02570]      ; 0040307b | int g_ActiveRenderColor
        ;   Label: LAB_0040307b
    MOV BX,word ptr [EBX*0x2 + 0x2d01020] ; 00403081 | ushort[256] g_ColorTable16
    CMP EAX,EDX                         ; 00403089
    JG 0x004030b0                       ; 0040308b | LAB_004030b0
        ;   XREF to: 004030b0 (CONDITIONAL_JUMP)
    LEA EDI,[ESI + ESI*0x1]             ; 0040308d
    MOV EDX,EBP                         ; 00403090
    MOV ESI,ECX                         ; 00403092
    MOV ECX,dword ptr [EDX + 0x2cf6a9c] ; 00403094 | void *[1024] g_ScreenBufferArray
        ;   Label: LAB_00403094
    ADD EDX,0x4                         ; 0040309a
    INC EAX                             ; 0040309d
    MOV word ptr [ECX + EDI*0x1],BX     ; 0040309e
    CMP EDX,ESI                         ; 004030a2
    JLE 0x00403094                      ; 004030a4 | LAB_00403094
        ;   XREF to: 00403094 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004030a6
    LEA EDX,[EDX]                       ; 004030ac
    POP EBP                             ; 004030b0
        ;   Label: LAB_004030b0
    POP EDI                             ; 004030b1
    POP ESI                             ; 004030b2
    POP EBX                             ; 004030b3
    RET                                 ; 004030b4
    MOV EDI,dword ptr [0x02d02570]      ; 004030b5 | int g_ActiveRenderColor
        ;   Label: LAB_004030b5
    MOV EDI,dword ptr [EDI*0x4 + 0x2d01220] ; 004030bb | uint[256] g_ColorTable32
    CMP EAX,EDX                         ; 004030c2
    JG 0x004030b0                       ; 004030c4 | LAB_004030b0
        ;   XREF to: 004030b0 (CONDITIONAL_JUMP)
    LEA EBX,[ESI*0x4 + 0x0]             ; 004030c6
    MOV EDX,EBP                         ; 004030cd
    MOV ESI,ECX                         ; 004030cf
    MOV ECX,dword ptr [EDX + 0x2cf6a9c] ; 004030d1 | void *[1024] g_ScreenBufferArray
        ;   Label: LAB_004030d1
    ADD EDX,0x4                         ; 004030d7
    INC EAX                             ; 004030da
    MOV dword ptr [ECX + EBX*0x1],EDI   ; 004030db
    CMP EDX,ESI                         ; 004030de
    JLE 0x004030d1                      ; 004030e0 | LAB_004030d1
        ;   XREF to: 004030d1 (CONDITIONAL_JUMP)
    POP EBP                             ; 004030e2
    POP EDI                             ; 004030e3
    POP ESI                             ; 004030e4
    POP EBX                             ; 004030e5
    RET                                 ; 004030e6
    JBE 0x0040307b                      ; 004030e7 | LAB_0040307b
        ;   Label: LAB_004030e7
        ;   XREF to: 0040307b (CONDITIONAL_JUMP)
    CMP EBX,0x20                        ; 004030e9
    JZ 0x004030b5                       ; 004030ec | LAB_004030b5
        ;   XREF to: 004030b5 (CONDITIONAL_JUMP)
    MOV EAX,0x613203                    ; 004030ee | = "..\\engine\\2d.c" | s_engine_2d_c_00613203 = ..\engine\2d.c
        ;   Label: LAB_004030ee
    MOV EDX,0x8d8                       ; 004030f3
    PUSH 0x613212                       ; 004030f8 | = "vLine - invalid bitsPerPixel" | s_vLine_invalid_bitsPerPix_00613212 = vLine - invalid bitsPerPixel
    MOV [0x02f0ca48],EAX                ; 004030fd | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00403102 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00403108 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040310d
    POP EBP                             ; 00403110
    POP EDI                             ; 00403111
    POP ESI                             ; 00403112
    POP EBX                             ; 00403113
    RET                                 ; 00403114

