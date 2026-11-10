; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_0058e450(CWinFont *this_ptr,int width,int height)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined2       Stack[-0x3c]:2  local_3c
; undefined2       Stack[-0x3a]:2  local_3a
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_winfont.cpp_CWinFont_drawText_FUN_0058e0c0 at 0058e0cb
;   engine_winfont.cpp_CWinFont_getStringHeight_FUN_0058e720 at 0058e732
;   engine_winfont.cpp_CWinFont_getStringWidth_FUN_0058e6c0 at 0058e6d1
;
; Referenced Globals:
;   void* PTR_CreateBrushIndirect_005c83f4 = 001c87bc
;   void* PTR_CreateCompatibleDC_005c83f8 = 001c87d2
;   void* PTR_CreateDIBSection_005c83fc = 001c87e8
;   void* PTR_DeleteObject_005c8408 = 001c8816
;   void* PTR_Rectangle_005c8414 = 001c8850
;   void* PTR_SelectObject_005c8418 = 001c885c
;   void* PTR_SetBkColor_005c841c = 001c886c
;   void* PTR_SetBkMode_005c8420 = 001c887a
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141c0
;
; Called Functions:
;   CreateBrushIndirect
;   CreateCompatibleDC
;   CreateDIBSection
;   crt_memory.c_memset_FUN_005b77c0
;   DeleteObject
;   engine_winfont.cpp_CWinFont_reset_FUN_0058e640
;   Rectangle
;   SelectObject
;   SetBkColor
;   SetBkMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e450
        ;   Label: engine_winfont.cpp_CWinFont_createTextBackground_FUN_0058e450
    PUSH ESI                            ; 0058e451
    PUSH EDI                            ; 0058e452
    PUSH EBP                            ; 0058e453
    SUB ESP,0x38                        ; 0058e454
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0058e457
    MOV EDI,dword ptr [ESP + 0x50]      ; 0058e45b
    MOV ESI,dword ptr [ESP + 0x54]      ; 0058e45f
    TEST EDI,EDI                        ; 0058e463
    JLE 0x0058e4bb                      ; 0058e465
        ;   XREF to: 0058e4bb (CONDITIONAL_JUMP)  ; LAB_0058e4bb
    TEST ESI,ESI                        ; 0058e467
        ;   Label: LAB_0058e467
    JLE 0x0058e4c3                      ; 0058e469
        ;   XREF to: 0058e4c3 (CONDITIONAL_JUMP)  ; LAB_0058e4c3
    CMP dword ptr [EBX + 0x6a48],0x0    ; 0058e46b
        ;   Label: LAB_0058e46b
    SETZ AL                             ; 0058e472
    MOV ECX,dword ptr [EBX + 0x6b64]    ; 0058e475
    AND EAX,0xff                        ; 0058e47b
    CMP EDI,ECX                         ; 0058e480
    SETG DL                             ; 0058e482
    MOVZX EBP,DL                        ; 0058e485
    OR EAX,EBP                          ; 0058e488
    CMP ESI,dword ptr [EBX + 0x6b68]    ; 0058e48a
    SETG DL                             ; 0058e490
    MOVZX EBP,DL                        ; 0058e493
    MOV ECX,dword ptr [EBX + 0x6b6c]    ; 0058e496
    OR EAX,EBP                          ; 0058e49c
    CMP ECX,dword ptr [0x006141c0]      ; 0058e49e | DAT_006141c0
    SETNZ DL                            ; 0058e4a4
    MOVZX EBP,DL                        ; 0058e4a7
    OR EAX,EBP                          ; 0058e4aa
    JNZ 0x0058e4ca                      ; 0058e4ac
        ;   XREF to: 0058e4ca (CONDITIONAL_JUMP)  ; LAB_0058e4ca
    MOV EAX,0x1                         ; 0058e4ae
    ADD ESP,0x38                        ; 0058e4b3
        ;   Label: LAB_0058e4b3
    POP EBP                             ; 0058e4b6
    POP EDI                             ; 0058e4b7
    POP ESI                             ; 0058e4b8
    POP EBX                             ; 0058e4b9
    RET                                 ; 0058e4ba
    MOV EDI,dword ptr [0x006141b8]      ; 0058e4bb | DAT_006141b8
        ;   Label: LAB_0058e4bb
    JMP 0x0058e467                      ; 0058e4c1
        ;   XREF to: 0058e467 (UNCONDITIONAL_JUMP)  ; LAB_0058e467
    MOV ESI,0x64                        ; 0058e4c3
        ;   Label: LAB_0058e4c3
    JMP 0x0058e46b                      ; 0058e4c8
        ;   XREF to: 0058e46b (UNCONDITIONAL_JUMP)  ; LAB_0058e46b
    PUSH EBX                            ; 0058e4ca
        ;   Label: LAB_0058e4ca
    CALL engine_winfont.cpp_CWinFont_reset_FUN_0058e640 ; 0058e4cb
        ;   XREF to: 0058e640 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_0058e640(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 0058e4d0
    PUSH 0x0                            ; 0058e4d3
    CALL dword ptr CS:[0x5c83f8]        ; 0058e4d5 | PTR_CreateCompatibleDC_005c83f8
    PUSH 0x2c                           ; 0058e4dc
    PUSH 0x0                            ; 0058e4de
    MOV dword ptr [EBX + 0x6a48],EAX    ; 0058e4e0
    LEA EAX,[ESP + 0x8]                 ; 0058e4e6
    PUSH EAX                            ; 0058e4ea
    MOV EBP,0x28                        ; 0058e4eb
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0058e4f0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,0x1                         ; 0058e4f5
    ADD ESP,0xc                         ; 0058e4fa
    MOV ECX,ESI                         ; 0058e4fd
    XOR EAX,EAX                         ; 0058e4ff
    MOV dword ptr [ESP],EBP             ; 0058e501
    MOV word ptr [ESP + 0xc],DX         ; 0058e504
    MOV dword ptr [ESP + 0x14],EAX      ; 0058e509
    MOV dword ptr [ESP + 0x20],EAX      ; 0058e50d
    MOV dword ptr [ESP + 0x4],EDI       ; 0058e511
    MOV dword ptr [ESP + 0x8],ESI       ; 0058e515
    NEG ECX                             ; 0058e519
    MOV AX,[0x006141c0]                 ; 0058e51b | DAT_006141c0
    XOR EBP,EBP                         ; 0058e521
    MOV dword ptr [ESP + 0x8],ECX       ; 0058e523
    PUSH EBP                            ; 0058e527
    XOR EDX,EDX                         ; 0058e528
    MOV word ptr [ESP + 0x12],AX        ; 0058e52a
    PUSH EBP                            ; 0058e52f
    LEA EAX,[EBX + 0x6a58]              ; 0058e530
    MOV dword ptr [ESP + 0x18],EBP      ; 0058e536
    PUSH EAX                            ; 0058e53a
    MOV dword ptr [ESP + 0x24],EBP      ; 0058e53b
    MOV dword ptr [ESP + 0x28],EDX      ; 0058e53f
    PUSH EBP                            ; 0058e543
    LEA EAX,[ESP + 0x10]                ; 0058e544
    MOV dword ptr [ESP + 0x34],EBP      ; 0058e548
    PUSH EAX                            ; 0058e54c
    MOV EBP,dword ptr [EBX + 0x6a48]    ; 0058e54d
    PUSH EBP                            ; 0058e553
    CALL dword ptr CS:[0x5c83fc]        ; 0058e554 | PTR_CreateDIBSection_005c83fc
    MOV dword ptr [EBX + 0x6a4c],EAX    ; 0058e55b
    TEST EAX,EAX                        ; 0058e561
    JZ 0x0058e4b3                       ; 0058e563
        ;   XREF to: 0058e4b3 (CONDITIONAL_JUMP)  ; LAB_0058e4b3
    PUSH EAX                            ; 0058e569
    MOV ECX,dword ptr [EBX + 0x6a48]    ; 0058e56a
    PUSH ECX                            ; 0058e570
    CALL dword ptr CS:[0x5c8418]        ; 0058e571 | PTR_SelectObject_005c8418
    PUSH 0x2                            ; 0058e578
    MOV EBP,dword ptr [EBX + 0x6a48]    ; 0058e57a
    PUSH EBP                            ; 0058e580
    CALL dword ptr CS:[0x5c8420]        ; 0058e581 | PTR_SetBkMode_005c8420
    PUSH 0xff00ff                       ; 0058e588
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0058e58d
    PUSH EAX                            ; 0058e593
    CALL dword ptr CS:[0x5c841c]        ; 0058e594 | PTR_SetBkColor_005c841c
    MOV ECX,0xff00ff                    ; 0058e59b
    XOR EDX,EDX                         ; 0058e5a0
    LEA EAX,[ESP + 0x2c]                ; 0058e5a2
    MOV dword ptr [ESP + 0x2c],EDX      ; 0058e5a6
    PUSH EAX                            ; 0058e5aa
    MOV dword ptr [ESP + 0x34],ECX      ; 0058e5ab
    MOV dword ptr [ESP + 0x38],EDX      ; 0058e5af
    CALL dword ptr CS:[0x5c83f4]        ; 0058e5b3 | PTR_CreateBrushIndirect_005c83f4
    PUSH EAX                            ; 0058e5ba
    MOV EBP,EAX                         ; 0058e5bb
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0058e5bd
    PUSH EAX                            ; 0058e5c3
    CALL dword ptr CS:[0x5c8418]        ; 0058e5c4 | PTR_SelectObject_005c8418
    PUSH 0x0                            ; 0058e5cb
    MOV EDX,dword ptr [EBX + 0x6b64]    ; 0058e5cd
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 0058e5d3
    PUSH EDX                            ; 0058e5d9
    NEG EAX                             ; 0058e5da
    PUSH EAX                            ; 0058e5dc
    PUSH 0x0                            ; 0058e5dd
    MOV ECX,dword ptr [EBX + 0x6a48]    ; 0058e5df
    PUSH ECX                            ; 0058e5e5
    CALL dword ptr CS:[0x5c8414]        ; 0058e5e6 | PTR_Rectangle_005c8414
    PUSH EBP                            ; 0058e5ed
    CALL dword ptr CS:[0x5c8408]        ; 0058e5ee | PTR_DeleteObject_005c8408
    MOV EBP,dword ptr [EBX + 0x6a50]    ; 0058e5f5
    PUSH EBP                            ; 0058e5fb
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0058e5fc
    PUSH EAX                            ; 0058e602
    CALL dword ptr CS:[0x5c8418]        ; 0058e603 | PTR_SelectObject_005c8418
    MOV dword ptr [EBX + 0x6a54],EAX    ; 0058e60a
    MOV dword ptr [EBX + 0x6b64],EDI    ; 0058e610
    MOV dword ptr [EBX + 0x6b68],ESI    ; 0058e616
    MOV EAX,[0x006141c0]                ; 0058e61c | DAT_006141c0
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 0058e621
    MOV dword ptr [EBX + 0x6b6c],EAX    ; 0058e627
    TEST EDX,EDX                        ; 0058e62d
    SETNZ AL                            ; 0058e62f
    AND EAX,0xff                        ; 0058e632
    ADD ESP,0x38                        ; 0058e637
    POP EBP                             ; 0058e63a
    POP EDI                             ; 0058e63b
    POP ESI                             ; 0058e63c
    POP EBX                             ; 0058e63d
    RET                                 ; 0058e63e

