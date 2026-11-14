; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   left_x
; int              Stack[0x14]:4   top_y
; int              Stack[0x18]:4   right_x
; int              Stack[0x1c]:4   bottom_y
; int              Stack[0x20]:4   global_alpha
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004a5700 at 004a5e8d
;   core_fldnotes.cpp_SPageResourceText_draw_FUN_004a2060 at 004a2109
;   core_inv.cpp_FUN_004dd9b0 at 004de284
;
; Referenced Globals:
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

    PUSH EBX                            ; 0040dab0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0
    PUSH ESI                            ; 0040dab1
    PUSH EDI                            ; 0040dab2
    PUSH EBP                            ; 0040dab3
    SUB ESP,0x1c                        ; 0040dab4
    MOV EBP,dword ptr [ESP + 0x30]      ; 0040dab7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0040dabb
    MOV ESI,dword ptr [ESP + 0x40]      ; 0040dabf
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040dac3
    SUB EAX,EDI                         ; 0040dac7
    PUSH EBP                            ; 0040dac9
    INC EAX                             ; 0040daca
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0040dacb
    MOV dword ptr [ESP + 0x14],EAX      ; 0040dacf
    CALL engine_alphabit.cpp_FUN_0040dca0 ; 0040dad3
        ;   XREF to: 0040dca0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dca0()
    MOV EDX,dword ptr [EBP + 0xc]       ; 0040dad8
    SUB EBX,ESI                         ; 0040dadb
    IMUL ESI,EDX                        ; 0040dadd
    INC EBX                             ; 0040dae0
    ADD ESP,0x4                         ; 0040dae1
    ADD ESI,EDI                         ; 0040dae4
    MOV EDI,dword ptr [EBP]             ; 0040dae6
    MOV EAX,dword ptr [EBP + 0x4]       ; 0040dae9
    ADD EDI,ESI                         ; 0040daec
    ADD ESI,EAX                         ; 0040daee
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040daf0
    LEA EDX,[EBX*0x4 + 0x0]             ; 0040daf4
    SHL EAX,0x2                         ; 0040dafb
    MOV ECX,dword ptr [0x006141c0]      ; 0040dafe | DAT_006141c0
    ADD EDX,EAX                         ; 0040db04
    CMP ECX,0x20                        ; 0040db06
    JNZ 0x0040db68                      ; 0040db09
        ;   XREF to: 0040db68 (CONDITIONAL_JUMP)  ; LAB_0040db68
    TEST EBX,EBX                        ; 0040db0b
    JLE 0x0040db60                      ; 0040db0d
        ;   XREF to: 0040db60 (CONDITIONAL_JUMP)  ; LAB_0040db60
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040db0f
    MOV dword ptr [ESP + 0x14],EAX      ; 0040db13
    SHL EBX,0x2                         ; 0040db17
    MOV dword ptr [ESP],EDX             ; 0040db1a
    MOV dword ptr [ESP + 0x8],EBX       ; 0040db1d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040db21
        ;   Label: LAB_0040db21
    PUSH EDX                            ; 0040db25
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040db26
    PUSH ECX                            ; 0040db2a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040db2b
    PUSH ESI                            ; 0040db2f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040db30
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 0040db34 | DAT_01c2a38c
    PUSH EDI                            ; 0040db3a
    ADD EAX,EBX                         ; 0040db3b
    PUSH EAX                            ; 0040db3d
    CALL engine_special.cpp_renderAlphaRow32_FUN_0055d523 ; 0040db3e
        ;   XREF to: 0055d523 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow32_FUN_0055d523(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040db43
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040db46
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040db49
    MOV ECX,dword ptr [ESP]             ; 0040db4d
    ADD EDI,EBX                         ; 0040db50
    ADD EDX,0x4                         ; 0040db52
    ADD ESI,EBX                         ; 0040db55
    MOV dword ptr [ESP + 0x14],EDX      ; 0040db57
    CMP EDX,ECX                         ; 0040db5b
    JL 0x0040db21                       ; 0040db5d
        ;   XREF to: 0040db21 (CONDITIONAL_JUMP)  ; LAB_0040db21
    NOP                                 ; 0040db5f
    ADD ESP,0x1c                        ; 0040db60
        ;   Label: LAB_0040db60
    POP EBP                             ; 0040db63
    POP EDI                             ; 0040db64
    POP ESI                             ; 0040db65
    POP EBX                             ; 0040db66
    RET                                 ; 0040db67
    TEST EBX,EBX                        ; 0040db68
        ;   Label: LAB_0040db68
    JLE 0x0040db60                      ; 0040db6a
        ;   XREF to: 0040db60 (CONDITIONAL_JUMP)  ; LAB_0040db60
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040db6c
    MOV dword ptr [ESP + 0x18],EAX      ; 0040db70
    ADD EBX,EBX                         ; 0040db74
    MOV dword ptr [ESP + 0xc],EDX       ; 0040db76
    MOV dword ptr [ESP + 0x4],EBX       ; 0040db7a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040db7e
        ;   Label: LAB_0040db7e
    PUSH EDX                            ; 0040db82
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040db83
    PUSH ECX                            ; 0040db87
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040db88
    PUSH ESI                            ; 0040db8c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040db8d
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 0040db91 | DAT_01c2a38c
    PUSH EDI                            ; 0040db97
    ADD EAX,EBX                         ; 0040db98
    PUSH EAX                            ; 0040db9a
    CALL engine_special.cpp_renderAlphaRow16_FUN_0055d5be ; 0040db9b
        ;   XREF to: 0055d5be (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow16_FUN_0055d5be(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040dba0
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040dba3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040dba6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040dbaa
    ADD EDI,EBX                         ; 0040dbae
    ADD EDX,0x4                         ; 0040dbb0
    ADD ESI,EBX                         ; 0040dbb3
    MOV dword ptr [ESP + 0x18],EDX      ; 0040dbb5
    CMP EDX,ECX                         ; 0040dbb9
    JL 0x0040db7e                       ; 0040dbbb
        ;   XREF to: 0040db7e (CONDITIONAL_JUMP)  ; LAB_0040db7e
    ADD ESP,0x1c                        ; 0040dbbd
    POP EBP                             ; 0040dbc0
    POP EDI                             ; 0040dbc1
    POP ESI                             ; 0040dbc2
    POP EBX                             ; 0040dbc3
    RET                                 ; 0040dbc4

