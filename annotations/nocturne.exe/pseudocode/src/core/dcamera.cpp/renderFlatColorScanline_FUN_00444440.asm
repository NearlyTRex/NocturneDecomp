; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_00444440(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0050ddd0 at 0050de52
;
; Referenced Globals:
;   undefined4 DAT_012b0660
;   undefined4 DAT_0140d780
;   undefined4 DAT_014b7190
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444440
        ;   Label: core_dcamera.cpp_renderFlatColorScanline_FUN_00444440
    PUSH ESI                            ; 00444441
    PUSH EDI                            ; 00444442
    PUSH EBP                            ; 00444443
    SUB ESP,0x18                        ; 00444444
    MOV ESI,dword ptr [0x0140d780]      ; 00444447 | DAT_0140d780
    MOV EBP,dword ptr [ESP + 0x30]      ; 0044444d
    MOV EDX,dword ptr [ESP + 0x34]      ; 00444451
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00444455
    SUB ECX,dword ptr [0x01c00c5c]      ; 00444459 | DAT_01c00c5c
    MOV EBX,dword ptr [0x012b0660]      ; 0044445f | DAT_012b0660
    MOV dword ptr [ESP + 0x2c],ECX      ; 00444465
    CMP EBX,0x1                         ; 00444469
    JNZ 0x00444479                      ; 0044446c
        ;   XREF to: 00444479 (CONDITIONAL_JUMP)  ; LAB_00444479
    TEST byte ptr [ESP + 0x2c],0x1      ; 0044446e
    JNZ 0x004445eb                      ; 00444473
        ;   XREF to: 004445eb (CONDITIONAL_JUMP)  ; LAB_004445eb
    CMP dword ptr [0x012b0660],0x2      ; 00444479 | DAT_012b0660
        ;   Label: LAB_00444479
    JNZ 0x0044448d                      ; 00444480
        ;   XREF to: 0044448d (CONDITIONAL_JUMP)  ; LAB_0044448d
    TEST byte ptr [ESP + 0x2c],0x3      ; 00444482
    JNZ 0x004445eb                      ; 00444487
        ;   XREF to: 004445eb (CONDITIONAL_JUMP)  ; LAB_004445eb
    MOV EDI,dword ptr [EBP + 0x8]       ; 0044448d
        ;   Label: LAB_0044448d
    MOV EAX,[0x01c00c58]                ; 00444490 | DAT_01c00c58
    SAR EDI,0x10                        ; 00444495
    SUB EDI,EAX                         ; 00444498
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044449a
    MOV ECX,dword ptr [0x01c00c58]      ; 0044449d | DAT_01c00c58
    SAR EAX,0x10                        ; 004444a3
    SUB EAX,ECX                         ; 004444a6
    MOV dword ptr [ESP + 0x10],EAX      ; 004444a8
    CMP EDI,EAX                         ; 004444ac
    JLE 0x004444c0                      ; 004444ae
        ;   XREF to: 004444c0 (CONDITIONAL_JUMP)  ; LAB_004444c0
    MOV EAX,EDI                         ; 004444b0
    MOV EDI,dword ptr [ESP + 0x10]      ; 004444b2
    MOV dword ptr [ESP + 0x10],EAX      ; 004444b6
    MOV EAX,EBP                         ; 004444ba
    MOV EBP,EDX                         ; 004444bc
    MOV EDX,EAX                         ; 004444be
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004444c0
        ;   Label: LAB_004444c0
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004444c4
    LEA ECX,[EDI*0x4 + 0x0]             ; 004444c8
    MOV EBP,dword ptr [EBP + 0x28]      ; 004444cf
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 004444d2 | DAT_01bd4260
    MOV EDX,dword ptr [EDX + 0x28]      ; 004444d9
    ADD EAX,ECX                         ; 004444dc
    MOV CL,byte ptr [0x012b0660]        ; 004444de | DAT_012b0660
    MOV dword ptr [ESP + 0x14],EAX      ; 004444e4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004444e8
    SUB EDX,EBP                         ; 004444ec
    SAR EAX,CL                          ; 004444ee
    SAR EDI,CL                          ; 004444f0
    MOV dword ptr [ESP + 0x10],EAX      ; 004444f2
    SUB EAX,EDI                         ; 004444f6
    SAR EBX,CL                          ; 004444f8
    LEA ECX,[EAX + 0x1]                 ; 004444fa
    MOV EAX,EDX                         ; 004444fd
    SAR EDX,0x1f                        ; 004444ff
    IDIV ECX                            ; 00444502
    MOV dword ptr [ESP + 0xc],EAX       ; 00444504
    MOV EAX,[0x014b7190]                ; 00444508 | DAT_014b7190
    MOV EDX,EAX                         ; 0044450d
    SAR EDX,0x1f                        ; 0044450f
    SHL EDX,0x8                         ; 00444512
    SBB EAX,EDX                         ; 00444515
    SAR EAX,0x8                         ; 00444517
    MOV dword ptr [ESP + 0x2c],EBX      ; 0044451a
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0044451e
    MOV BL,AL                           ; 00444522
    LEA EAX,[EDX*0x4 + 0x0]             ; 00444524
    ADD EAX,EDX                         ; 0044452b
    SHL EAX,0x6                         ; 0044452d
    CMP ESI,0x1                         ; 00444530
    JLE 0x0044459f                      ; 00444533
        ;   XREF to: 0044459f (CONDITIONAL_JUMP)  ; LAB_0044459f
    MOV EDX,0x1                         ; 00444535
    MOV CL,byte ptr [0x012b0660]        ; 0044453a | DAT_012b0660
    SHL EDX,CL                          ; 00444540
    LEA ECX,[EDX*0x4 + 0x0]             ; 00444542
    MOV dword ptr [ESP + 0x4],EAX       ; 00444549
    MOV dword ptr [ESP + 0x8],ECX       ; 0044454d
    XOR ECX,ECX                         ; 00444551
    CMP EDI,dword ptr [ESP + 0x10]      ; 00444553
        ;   Label: LAB_00444553
    JGE 0x004445eb                      ; 00444557
        ;   XREF to: 004445eb (CONDITIONAL_JUMP)  ; LAB_004445eb
    MOV EAX,EBP                         ; 0044455d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044455f
    SAR EAX,0x8                         ; 00444563
    CMP EAX,dword ptr [EDX]             ; 00444566
    JA 0x00444581                       ; 00444568
        ;   XREF to: 00444581 (CONDITIONAL_JUMP)  ; LAB_00444581
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044456a
        ;   Label: LAB_0044456a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044456e
    INC EDI                             ; 00444572
    ADD EDX,EAX                         ; 00444573
    MOV EAX,dword ptr [ESP + 0xc]       ; 00444575
    MOV dword ptr [ESP + 0x14],EDX      ; 00444579
    ADD EBP,EAX                         ; 0044457d
    JMP 0x00444553                      ; 0044457f
        ;   XREF to: 00444553 (UNCONDITIONAL_JUMP)  ; LAB_00444553
    MOV EDX,ECX                         ; 00444581
        ;   Label: LAB_00444581
    TEST ESI,ESI                        ; 00444583
    JLE 0x0044456a                      ; 00444585
        ;   XREF to: 0044456a (CONDITIONAL_JUMP)  ; LAB_0044456a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00444587
    ADD EAX,EDI                         ; 0044458b
    ADD EAX,0x12c00                     ; 0044458d
        ;   Label: LAB_0044458d
    INC EDX                             ; 00444592
    MOV byte ptr [EAX + 0x12ceb78],BL   ; 00444593
    CMP EDX,ESI                         ; 00444599
    JL 0x0044458d                       ; 0044459b
        ;   XREF to: 0044458d (CONDITIONAL_JUMP)  ; LAB_0044458d
    JMP 0x0044456a                      ; 0044459d
        ;   XREF to: 0044456a (UNCONDITIONAL_JUMP)  ; LAB_0044456a
    ADD EAX,0x12ceb78                   ; 0044459f
        ;   Label: LAB_0044459f
    MOV EDX,dword ptr [ESP + 0x10]      ; 004445a4
    ADD EAX,EDI                         ; 004445a8
    CMP EDI,EDX                         ; 004445aa
    JGE 0x004445eb                      ; 004445ac
        ;   XREF to: 004445eb (CONDITIONAL_JUMP)  ; LAB_004445eb
    MOV EDX,EBP                         ; 004445ae
        ;   Label: LAB_004445ae
    SAR EDX,0x8                         ; 004445b0
    MOV dword ptr [ESP],EDX             ; 004445b3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004445b6
    MOV ECX,dword ptr [ESP]             ; 004445ba
    CMP ECX,dword ptr [EDX]             ; 004445bd
    JA 0x004445f9                       ; 004445bf
        ;   XREF to: 004445f9 (CONDITIONAL_JUMP)  ; LAB_004445f9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004445c1
        ;   Label: LAB_004445c1
    MOV EDX,0x1                         ; 004445c5
    ADD EBP,ECX                         ; 004445ca
    MOV CL,byte ptr [0x012b0660]        ; 004445cc | DAT_012b0660
    INC EDI                             ; 004445d2
    SHL EDX,CL                          ; 004445d3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004445d5
    SHL EDX,0x2                         ; 004445d9
    INC EAX                             ; 004445dc
    ADD ECX,EDX                         ; 004445dd
    MOV EDX,dword ptr [ESP + 0x10]      ; 004445df
    MOV dword ptr [ESP + 0x14],ECX      ; 004445e3
    CMP EDI,EDX                         ; 004445e7
    JL 0x004445ae                       ; 004445e9
        ;   XREF to: 004445ae (CONDITIONAL_JUMP)  ; LAB_004445ae
    MOV dword ptr [0x0140d780],ESI      ; 004445eb | DAT_0140d780
        ;   Label: LAB_004445eb
    ADD ESP,0x18                        ; 004445f1
        ;   Label: LAB_004445f1
    POP EBP                             ; 004445f4
    POP EDI                             ; 004445f5
    POP ESI                             ; 004445f6
    POP EBX                             ; 004445f7
    RET                                 ; 004445f8
    MOV byte ptr [EAX],BL               ; 004445f9
        ;   Label: LAB_004445f9
    JMP 0x004445c1                      ; 004445fb
        ;   XREF to: 004445c1 (UNCONDITIONAL_JUMP)  ; LAB_004445c1

