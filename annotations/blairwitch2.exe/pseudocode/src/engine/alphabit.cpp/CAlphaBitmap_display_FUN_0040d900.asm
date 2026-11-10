; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap *this_ptr,int x,int y,int alpha)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   alpha
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[17]:
;   core_fldnotes.cpp_FUN_004a2060 at 004a20d3
;   core_fldnotes.cpp_FUN_004a2270 at 004a2284
;   core_fldnotes.cpp_FUN_004a24f0 at 004a260a
;   core_fldnotes.cpp_FUN_004a3e40 at 004a3e6b
;   core_fldnotes.cpp_FUN_004a5700 at 004a57be
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004be0f7
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be5e6
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0 at 004b613b
;   core_game.cpp_FUN_004bdc1e at 004bdc6f
;   core_inv.cpp_FUN_004da130 at 004da163
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040dca0
;   engine_special.cpp_renderAlphaRow16_FUN_0055d5be
;   engine_special.cpp_renderAlphaRow32_FUN_0055d523
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d900
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
    PUSH ESI                            ; 0040d901
    PUSH EDI                            ; 0040d902
    PUSH EBP                            ; 0040d903
    SUB ESP,0x1c                        ; 0040d904
    MOV ESI,dword ptr [ESP + 0x30]      ; 0040d907
    MOV EDI,dword ptr [ESP + 0x34]      ; 0040d90b
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d90f
    ADD EAX,EDI                         ; 0040d912
    TEST EAX,EAX                        ; 0040d914
    JL 0x0040d937                       ; 0040d916
        ;   XREF to: 0040d937 (CONDITIONAL_JUMP)  ; LAB_0040d937
    CMP EDI,dword ptr [0x006141b8]      ; 0040d918 | DAT_006141b8
    JGE 0x0040d937                      ; 0040d91e
        ;   XREF to: 0040d937 (CONDITIONAL_JUMP)  ; LAB_0040d937
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d920
    ADD EAX,dword ptr [ESI + 0x10]      ; 0040d924
    TEST EAX,EAX                        ; 0040d927
    JL 0x0040d937                       ; 0040d929
        ;   XREF to: 0040d937 (CONDITIONAL_JUMP)  ; LAB_0040d937
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d92b
    CMP EAX,dword ptr [0x006141bc]      ; 0040d92f | DAT_006141bc
    JL 0x0040d93f                       ; 0040d935
        ;   XREF to: 0040d93f (CONDITIONAL_JUMP)  ; LAB_0040d93f
    ADD ESP,0x1c                        ; 0040d937
        ;   Label: LAB_0040d937
    POP EBP                             ; 0040d93a
    POP EDI                             ; 0040d93b
    POP ESI                             ; 0040d93c
    POP EBX                             ; 0040d93d
    RET                                 ; 0040d93e
    PUSH ESI                            ; 0040d93f
        ;   Label: LAB_0040d93f
    CALL engine_alphabit.cpp_FUN_0040dca0 ; 0040d940
        ;   XREF to: 0040dca0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dca0()
    ADD ESP,0x4                         ; 0040d945
    MOV EAX,dword ptr [ESI]             ; 0040d948
    MOV dword ptr [ESP + 0x18],EAX      ; 0040d94a
    MOV EAX,[0x006141c0]                ; 0040d94e | DAT_006141c0
    MOV EBP,dword ptr [ESI + 0x4]       ; 0040d953
    CMP EAX,0x20                        ; 0040d956
    JNZ 0x0040da05                      ; 0040d959
        ;   XREF to: 0040da05 (CONDITIONAL_JUMP)  ; LAB_0040da05
    XOR EBX,EBX                         ; 0040d95f
    MOV EAX,dword ptr [ESI + 0x10]      ; 0040d961
    MOV dword ptr [ESP + 0x8],EBX       ; 0040d964
    TEST EAX,EAX                        ; 0040d968
    JLE 0x0040d937                      ; 0040d96a
        ;   XREF to: 0040d937 (CONDITIONAL_JUMP)  ; LAB_0040d937
    LEA EAX,[EDI*0x4 + 0x0]             ; 0040d96c
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d973
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d977
    MOV dword ptr [ESP + 0x14],EAX      ; 0040d97b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040d97f
        ;   Label: LAB_0040d97f
    TEST ECX,ECX                        ; 0040d983
    JL 0x0040d9cf                       ; 0040d985
        ;   XREF to: 0040d9cf (CONDITIONAL_JUMP)  ; LAB_0040d9cf
    CMP ECX,dword ptr [0x006141bc]      ; 0040d987 | DAT_006141bc
    JGE 0x0040d9cf                      ; 0040d98d
        ;   XREF to: 0040d9cf (CONDITIONAL_JUMP)  ; LAB_0040d9cf
    MOV ECX,dword ptr [ECX*0x4 + 0x1c2a38c] ; 0040d98f | DAT_01c2a38c
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d996
    XOR EDX,EDX                         ; 0040d999
    TEST EDI,EDI                        ; 0040d99b
    JL 0x0040d9fd                       ; 0040d99d
        ;   XREF to: 0040d9fd (CONDITIONAL_JUMP)  ; LAB_0040d9fd
    ADD ECX,dword ptr [ESP + 0x4]       ; 0040d99f
    LEA EBX,[EDI + EAX*0x1]             ; 0040d9a3
        ;   Label: LAB_0040d9a3
    CMP EBX,dword ptr [0x006141b8]      ; 0040d9a6 | DAT_006141b8
    JLE 0x0040d9b5                      ; 0040d9ac
        ;   XREF to: 0040d9b5 (CONDITIONAL_JUMP)  ; LAB_0040d9b5
    MOV EAX,[0x006141b8]                ; 0040d9ae | DAT_006141b8
    SUB EAX,EDI                         ; 0040d9b3
    PUSH EAX                            ; 0040d9b5
        ;   Label: LAB_0040d9b5
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040d9b6
    PUSH EAX                            ; 0040d9ba
    LEA EAX,[EDX + EBP*0x1]             ; 0040d9bb
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040d9be
    PUSH EAX                            ; 0040d9c2
    ADD EDX,EBX                         ; 0040d9c3
    PUSH EDX                            ; 0040d9c5
    PUSH ECX                            ; 0040d9c6
    CALL engine_special.cpp_renderAlphaRow32_FUN_0055d523 ; 0040d9c7
        ;   XREF to: 0055d523 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow32_FUN_0055d523(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040d9cc
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040d9cf
        ;   Label: LAB_0040d9cf
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d9d3
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d9d7
    INC EBX                             ; 0040d9da
    ADD EDX,EAX                         ; 0040d9db
    ADD EBP,EAX                         ; 0040d9dd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d9df
    MOV dword ptr [ESP + 0x18],EDX      ; 0040d9e3
    MOV dword ptr [ESP + 0x14],EBX      ; 0040d9e7
    INC EAX                             ; 0040d9eb
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040d9ec
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d9ef
    CMP EAX,EDX                         ; 0040d9f3
    JGE 0x0040d937                      ; 0040d9f5
        ;   XREF to: 0040d937 (CONDITIONAL_JUMP)  ; LAB_0040d937
    JMP 0x0040d97f                      ; 0040d9fb
        ;   XREF to: 0040d97f (UNCONDITIONAL_JUMP)  ; LAB_0040d97f
    MOV EDX,EDI                         ; 0040d9fd
        ;   Label: LAB_0040d9fd
    NEG EDX                             ; 0040d9ff
    SUB EAX,EDX                         ; 0040da01
    JMP 0x0040d9a3                      ; 0040da03
        ;   XREF to: 0040d9a3 (UNCONDITIONAL_JUMP)  ; LAB_0040d9a3
    XOR EDX,EDX                         ; 0040da05
        ;   Label: LAB_0040da05
    MOV ECX,dword ptr [ESI + 0x10]      ; 0040da07
    MOV dword ptr [ESP + 0xc],EDX       ; 0040da0a
    TEST ECX,ECX                        ; 0040da0e
    JLE 0x0040d937                      ; 0040da10
        ;   XREF to: 0040d937 (CONDITIONAL_JUMP)  ; LAB_0040d937
    LEA EAX,[EDI + EDI*0x1]             ; 0040da16
    MOV dword ptr [ESP],EAX             ; 0040da19
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040da1c
    MOV dword ptr [ESP + 0x10],EAX      ; 0040da20
    MOV ECX,dword ptr [ESP + 0x10]      ; 0040da24
        ;   Label: LAB_0040da24
    TEST ECX,ECX                        ; 0040da28
    JL 0x0040da73                       ; 0040da2a
        ;   XREF to: 0040da73 (CONDITIONAL_JUMP)  ; LAB_0040da73
    CMP ECX,dword ptr [0x006141bc]      ; 0040da2c | DAT_006141bc
    JGE 0x0040da73                      ; 0040da32
        ;   XREF to: 0040da73 (CONDITIONAL_JUMP)  ; LAB_0040da73
    MOV ECX,dword ptr [ECX*0x4 + 0x1c2a38c] ; 0040da34 | DAT_01c2a38c
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040da3b
    XOR EDX,EDX                         ; 0040da3e
    TEST EDI,EDI                        ; 0040da40
    JL 0x0040daa1                       ; 0040da42
        ;   XREF to: 0040daa1 (CONDITIONAL_JUMP)  ; LAB_0040daa1
    ADD ECX,dword ptr [ESP]             ; 0040da44
    LEA EBX,[EDI + EAX*0x1]             ; 0040da47
        ;   Label: LAB_0040da47
    CMP EBX,dword ptr [0x006141b8]      ; 0040da4a | DAT_006141b8
    JLE 0x0040da59                      ; 0040da50
        ;   XREF to: 0040da59 (CONDITIONAL_JUMP)  ; LAB_0040da59
    MOV EAX,[0x006141b8]                ; 0040da52 | DAT_006141b8
    SUB EAX,EDI                         ; 0040da57
    PUSH EAX                            ; 0040da59
        ;   Label: LAB_0040da59
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040da5a
    PUSH EAX                            ; 0040da5e
    LEA EAX,[EDX + EBP*0x1]             ; 0040da5f
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040da62
    PUSH EAX                            ; 0040da66
    ADD EDX,EBX                         ; 0040da67
    PUSH EDX                            ; 0040da69
    PUSH ECX                            ; 0040da6a
    CALL engine_special.cpp_renderAlphaRow16_FUN_0055d5be ; 0040da6b
        ;   XREF to: 0055d5be (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow16_FUN_0055d5be(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040da70
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040da73
        ;   Label: LAB_0040da73
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040da77
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040da7b
    INC EBX                             ; 0040da7e
    ADD EDX,EAX                         ; 0040da7f
    ADD EBP,EAX                         ; 0040da81
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040da83
    MOV dword ptr [ESP + 0x18],EDX      ; 0040da87
    MOV dword ptr [ESP + 0x10],EBX      ; 0040da8b
    INC EAX                             ; 0040da8f
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040da90
    MOV dword ptr [ESP + 0xc],EAX       ; 0040da93
    CMP EAX,EDX                         ; 0040da97
    JGE 0x0040d937                      ; 0040da99
        ;   XREF to: 0040d937 (CONDITIONAL_JUMP)  ; LAB_0040d937
    JMP 0x0040da24                      ; 0040da9f
        ;   XREF to: 0040da24 (UNCONDITIONAL_JUMP)  ; LAB_0040da24
    MOV EDX,EDI                         ; 0040daa1
        ;   Label: LAB_0040daa1
    NEG EDX                             ; 0040daa3
    SUB EAX,EDX                         ; 0040daa5
    JMP 0x0040da47                      ; 0040daa7
        ;   XREF to: 0040da47 (UNCONDITIONAL_JUMP)  ; LAB_0040da47

