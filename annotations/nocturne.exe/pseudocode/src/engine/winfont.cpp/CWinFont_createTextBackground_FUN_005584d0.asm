; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(CWinFont *this_ptr,int width,int height)
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
;   engine_winfont.cpp_CWinFont_drawText_FUN_00558060 at 0055806b
;   engine_winfont.cpp_CWinFont_getStringHeight_FUN_00558770 at 00558782
;   engine_winfont.cpp_CWinFont_getStringWidth_FUN_00558710 at 00558721
;
; Referenced Globals:
;   void* PTR_CreateBrushIndirect_00575398 = 001756fc
;   void* PTR_CreateCompatibleDC_0057539c = 00175712
;   void* PTR_CreateDIBSection_005753a0 = 00175728
;   void* PTR_DeleteObject_005753ac = 00175756
;   void* PTR_Rectangle_005753b8 = 00175790
;   void* PTR_SelectObject_005753bc = 0017579c
;   void* PTR_SetBkColor_005753c0 = 001757ac
;   void* PTR_SetBkMode_005753c4 = 001757ba
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7624
;
; Called Functions:
;   CreateBrushIndirect
;   CreateCompatibleDC
;   CreateDIBSection
;   crt_memory.c_memset_FUN_00563cc0
;   DeleteObject
;   engine_winfont.cpp_CWinFont_reset_FUN_005586a0
;   Rectangle
;   SelectObject
;   SetBkColor
;   SetBkMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005584d0
        ;   Label: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0
    PUSH ESI                            ; 005584d1
    PUSH EDI                            ; 005584d2
    PUSH EBP                            ; 005584d3
    SUB ESP,0x38                        ; 005584d4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005584d7
    MOV EDI,dword ptr [ESP + 0x50]      ; 005584db
    MOV ESI,dword ptr [ESP + 0x54]      ; 005584df
    TEST EDI,EDI                        ; 005584e3
    JLE 0x00558538                      ; 005584e5
        ;   XREF to: 00558538 (CONDITIONAL_JUMP)  ; LAB_00558538
    TEST ESI,ESI                        ; 005584e7
        ;   Label: LAB_005584e7
    JLE 0x00558540                      ; 005584e9
        ;   XREF to: 00558540 (CONDITIONAL_JUMP)  ; LAB_00558540
    CMP dword ptr [EBX + 0x4],0x0       ; 005584eb
        ;   Label: LAB_005584eb
    SETZ AL                             ; 005584ef
    MOV ECX,dword ptr [EBX + 0x120]     ; 005584f2
    AND EAX,0xff                        ; 005584f8
    CMP EDI,ECX                         ; 005584fd
    SETG DL                             ; 005584ff
    MOVZX EBP,DL                        ; 00558502
    OR EAX,EBP                          ; 00558505
    CMP ESI,dword ptr [EBX + 0x124]     ; 00558507
    SETG DL                             ; 0055850d
    MOVZX EBP,DL                        ; 00558510
    MOV ECX,dword ptr [EBX + 0x128]     ; 00558513
    OR EAX,EBP                          ; 00558519
    CMP ECX,dword ptr [0x005b7624]      ; 0055851b | DAT_005b7624
    SETNZ DL                            ; 00558521
    MOVZX EBP,DL                        ; 00558524
    OR EAX,EBP                          ; 00558527
    JNZ 0x00558547                      ; 00558529
        ;   XREF to: 00558547 (CONDITIONAL_JUMP)  ; LAB_00558547
    MOV EAX,0x1                         ; 0055852b
    ADD ESP,0x38                        ; 00558530
        ;   Label: LAB_00558530
    POP EBP                             ; 00558533
    POP EDI                             ; 00558534
    POP ESI                             ; 00558535
    POP EBX                             ; 00558536
    RET                                 ; 00558537
    MOV EDI,dword ptr [0x005b761c]      ; 00558538 | DAT_005b761c
        ;   Label: LAB_00558538
    JMP 0x005584e7                      ; 0055853e
        ;   XREF to: 005584e7 (UNCONDITIONAL_JUMP)  ; LAB_005584e7
    MOV ESI,0x64                        ; 00558540
        ;   Label: LAB_00558540
    JMP 0x005584eb                      ; 00558545
        ;   XREF to: 005584eb (UNCONDITIONAL_JUMP)  ; LAB_005584eb
    PUSH EBX                            ; 00558547
        ;   Label: LAB_00558547
    CALL engine_winfont.cpp_CWinFont_reset_FUN_005586a0 ; 00558548
        ;   XREF to: 005586a0 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_005586a0(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 0055854d
    PUSH 0x0                            ; 00558550
    CALL dword ptr CS:[0x57539c]        ; 00558552 | PTR_CreateCompatibleDC_0057539c
    PUSH 0x2c                           ; 00558559
    PUSH 0x0                            ; 0055855b
    MOV dword ptr [EBX + 0x4],EAX       ; 0055855d
    LEA EAX,[ESP + 0x8]                 ; 00558560
    PUSH EAX                            ; 00558564
    MOV EBP,0x28                        ; 00558565
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0055856a
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDX,0x1                         ; 0055856f
    ADD ESP,0xc                         ; 00558574
    MOV ECX,ESI                         ; 00558577
    XOR EAX,EAX                         ; 00558579
    MOV dword ptr [ESP],EBP             ; 0055857b
    MOV word ptr [ESP + 0xc],DX         ; 0055857e
    MOV dword ptr [ESP + 0x14],EAX      ; 00558583
    MOV dword ptr [ESP + 0x20],EAX      ; 00558587
    MOV dword ptr [ESP + 0x4],EDI       ; 0055858b
    MOV dword ptr [ESP + 0x8],ESI       ; 0055858f
    NEG ECX                             ; 00558593
    MOV AX,[0x005b7624]                 ; 00558595 | DAT_005b7624
    XOR EBP,EBP                         ; 0055859b
    MOV dword ptr [ESP + 0x8],ECX       ; 0055859d
    PUSH EBP                            ; 005585a1
    XOR EDX,EDX                         ; 005585a2
    MOV word ptr [ESP + 0x12],AX        ; 005585a4
    PUSH EBP                            ; 005585a9
    LEA EAX,[EBX + 0x14]                ; 005585aa
    MOV dword ptr [ESP + 0x18],EBP      ; 005585ad
    PUSH EAX                            ; 005585b1
    MOV dword ptr [ESP + 0x24],EBP      ; 005585b2
    MOV dword ptr [ESP + 0x28],EDX      ; 005585b6
    PUSH EBP                            ; 005585ba
    LEA EAX,[ESP + 0x10]                ; 005585bb
    MOV dword ptr [ESP + 0x34],EBP      ; 005585bf
    PUSH EAX                            ; 005585c3
    MOV EBP,dword ptr [EBX + 0x4]       ; 005585c4
    PUSH EBP                            ; 005585c7
    CALL dword ptr CS:[0x5753a0]        ; 005585c8 | PTR_CreateDIBSection_005753a0
    MOV dword ptr [EBX + 0x8],EAX       ; 005585cf
    TEST EAX,EAX                        ; 005585d2
    JZ 0x00558530                       ; 005585d4
        ;   XREF to: 00558530 (CONDITIONAL_JUMP)  ; LAB_00558530
    PUSH EAX                            ; 005585da
    MOV ECX,dword ptr [EBX + 0x4]       ; 005585db
    PUSH ECX                            ; 005585de
    CALL dword ptr CS:[0x5753bc]        ; 005585df | PTR_SelectObject_005753bc
    PUSH 0x2                            ; 005585e6
    MOV EBP,dword ptr [EBX + 0x4]       ; 005585e8
    PUSH EBP                            ; 005585eb
    CALL dword ptr CS:[0x5753c4]        ; 005585ec | PTR_SetBkMode_005753c4
    PUSH 0xff00ff                       ; 005585f3
    MOV EAX,dword ptr [EBX + 0x4]       ; 005585f8
    PUSH EAX                            ; 005585fb
    CALL dword ptr CS:[0x5753c0]        ; 005585fc | PTR_SetBkColor_005753c0
    MOV ECX,0xff00ff                    ; 00558603
    XOR EDX,EDX                         ; 00558608
    LEA EAX,[ESP + 0x2c]                ; 0055860a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0055860e
    PUSH EAX                            ; 00558612
    MOV dword ptr [ESP + 0x34],ECX      ; 00558613
    MOV dword ptr [ESP + 0x38],EDX      ; 00558617
    CALL dword ptr CS:[0x575398]        ; 0055861b | PTR_CreateBrushIndirect_00575398
    PUSH EAX                            ; 00558622
    MOV EBP,EAX                         ; 00558623
    MOV EAX,dword ptr [EBX + 0x4]       ; 00558625
    PUSH EAX                            ; 00558628
    CALL dword ptr CS:[0x5753bc]        ; 00558629 | PTR_SelectObject_005753bc
    PUSH 0x0                            ; 00558630
    MOV EDX,dword ptr [EBX + 0x120]     ; 00558632
    MOV EAX,dword ptr [EBX + 0x124]     ; 00558638
    PUSH EDX                            ; 0055863e
    NEG EAX                             ; 0055863f
    PUSH EAX                            ; 00558641
    PUSH 0x0                            ; 00558642
    MOV ECX,dword ptr [EBX + 0x4]       ; 00558644
    PUSH ECX                            ; 00558647
    CALL dword ptr CS:[0x5753b8]        ; 00558648 | PTR_Rectangle_005753b8
    PUSH EBP                            ; 0055864f
    CALL dword ptr CS:[0x5753ac]        ; 00558650 | PTR_DeleteObject_005753ac
    MOV EBP,dword ptr [EBX + 0xc]       ; 00558657
    PUSH EBP                            ; 0055865a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0055865b
    PUSH EAX                            ; 0055865e
    CALL dword ptr CS:[0x5753bc]        ; 0055865f | PTR_SelectObject_005753bc
    MOV dword ptr [EBX + 0x10],EAX      ; 00558666
    MOV dword ptr [EBX + 0x120],EDI     ; 00558669
    MOV dword ptr [EBX + 0x124],ESI     ; 0055866f
    MOV EAX,[0x005b7624]                ; 00558675 | DAT_005b7624
    MOV EDX,dword ptr [EBX + 0x4]       ; 0055867a
    MOV dword ptr [EBX + 0x128],EAX     ; 0055867d
    TEST EDX,EDX                        ; 00558683
    SETNZ AL                            ; 00558685
    AND EAX,0xff                        ; 00558688
    ADD ESP,0x38                        ; 0055868d
    POP EBP                             ; 00558690
    POP EDI                             ; 00558691
    POP ESI                             ; 00558692
    POP EBX                             ; 00558693
    RET                                 ; 00558694

