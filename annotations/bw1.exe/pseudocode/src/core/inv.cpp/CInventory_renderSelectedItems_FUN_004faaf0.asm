; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004faaf0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00550580 at 00550d78
;
; Referenced Globals:
;   undefined4 DAT_005e6890
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0061f1a0
;   undefined4 DAT_0061f1a4
;   undefined4 g_CGameInstance.letterbox_mode
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d1bc5c
;
; Called Functions:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0
;   core_inv.cpp_drawItemIconBackground_FUN_004fa930
;   core_inv.cpp_drawWeaponIconBackground_FUN_004fa770
;   core_inv.cpp_FUN_004f70e0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004faaf0
        ;   Label: core_inv.cpp_CInventory_renderSelectedItems_FUN_004faaf0
    PUSH ESI                            ; 004faaf1
    PUSH EDI                            ; 004faaf2
    PUSH EBP                            ; 004faaf3
    SUB ESP,0x2c                        ; 004faaf4
    MOV EBX,dword ptr [ESP + 0x40]      ; 004faaf7
    MOV EAX,[0x0061d95c]                ; 004faafb | g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 004fab00 | g_CGameInstance.letterbox_mode
    JNZ 0x004fad69                      ; 004fab07
        ;   XREF to: 004fad69 (CONDITIONAL_JUMP)  ; LAB_004fad69
    MOV EDX,dword ptr [0x01d06ab4]      ; 004fab0d | DAT_01d06ab4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004fab13
    CMP EAX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004fab16
    JNZ 0x004fad69                      ; 004fab1d
        ;   XREF to: 004fad69 (CONDITIONAL_JUMP)  ; LAB_004fad69
    MOV ESI,dword ptr [0x0061b49c]      ; 004fab23 | DAT_0061b49c
    CMP ESI,dword ptr [0x01d1bc5c]      ; 004fab29 | DAT_01d1bc5c
    JNZ 0x004fad71                      ; 004fab2f
        ;   XREF to: 004fad71 (CONDITIONAL_JUMP)  ; LAB_004fad71
    CMP dword ptr [EBX + 0x338],0x0     ; 004fab35
        ;   Label: LAB_004fab35
    JZ 0x004fac51                       ; 004fab3c
        ;   XREF to: 004fac51 (CONDITIONAL_JUMP)  ; LAB_004fac51
    FLD float ptr [EBX + 0x340]         ; 004fab42
    FLDZ                                ; 004fab48
    FCOMPP                              ; 004fab4a
    FNSTSW AX                           ; 004fab4c
    SAHF                                ; 004fab4e
    JNC 0x004fac51                      ; 004fab4f
        ;   XREF to: 004fac51 (CONDITIONAL_JUMP)  ; LAB_004fac51
    MOV EAX,0x8                         ; 004fab55
    MOV EDI,0x50                        ; 004fab5a
    MOV ESI,dword ptr [0x0061f1a0]      ; 004fab5f | DAT_0061f1a0
    MOV EBP,dword ptr [0x0061b49c]      ; 004fab65 | DAT_0061b49c
    MOV ECX,dword ptr [0x0061f1a4]      ; 004fab6b | DAT_0061f1a4
    CMP EBP,0x180                       ; 004fab71
    JGE 0x004fab86                      ; 004fab77
        ;   XREF to: 004fab86 (CONDITIONAL_JUMP)  ; LAB_004fab86
    CMP dword ptr [EBX + 0x454],0x0     ; 004fab79
    JZ 0x004fad7b                       ; 004fab80
        ;   XREF to: 004fad7b (CONDITIONAL_JUMP)  ; LAB_004fad7b
    MOV EDX,dword ptr [0x0061b498]      ; 004fab86 | DAT_0061b498
        ;   Label: LAB_004fab86
    SUB EDX,EDI                         ; 004fab8c
    SUB EDX,EAX                         ; 004fab8e
    FLD float ptr [EBX + 0x340]         ; 004fab90
    MOV dword ptr [ESP],EDX             ; 004fab96
    MOV EDX,dword ptr [0x0061b49c]      ; 004fab99 | DAT_0061b49c
    MOV EBP,0xffff                      ; 004fab9f
    SUB EDX,EDI                         ; 004faba4
    FLD1                                ; 004faba6
    SUB EDX,EAX                         ; 004faba8
    MOV dword ptr [ESP + 0x20],EBP      ; 004fabaa
    MOV dword ptr [ESP + 0xc],EDX       ; 004fabae
    FCOMPP                              ; 004fabb2
    FNSTSW AX                           ; 004fabb4
    SAHF                                ; 004fabb6
    JBE 0x004fabce                      ; 004fabb7
        ;   XREF to: 004fabce (CONDITIONAL_JUMP)  ; LAB_004fabce
    FLD float ptr [EBX + 0x340]         ; 004fabb9
    FMUL float ptr [0x005e6890]         ; 004fabbf | DAT_005e6890
    CALL crt_math.c_round_FUN_005c03a0  ; 004fabc5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x20]        ; 004fabca
    MOV EAX,[0x0061b498]                ; 004fabce | DAT_0061b498
        ;   Label: LAB_004fabce
    DEC EAX                             ; 004fabd3
    MOV dword ptr [ESP + 0x10],EAX      ; 004fabd4
    MOV EAX,[0x0061b49c]                ; 004fabd8 | DAT_0061b49c
    DEC EAX                             ; 004fabdd
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fabde
    MOV dword ptr [ESP + 0x14],EAX      ; 004fabe2
    MOV EAX,0x3                         ; 004fabe6
    ADD EDX,EDX                         ; 004fabeb
    MOV dword ptr [ESP + 0x28],EAX      ; 004fabed
    MOV EAX,EDX                         ; 004fabf1
    SAR EDX,0x1f                        ; 004fabf3
    IDIV dword ptr [ESP + 0x28]         ; 004fabf6
    MOV EBP,dword ptr [0x0061b49c]      ; 004fabfa | DAT_0061b49c
    MOV EDX,dword ptr [EBX + 0x454]     ; 004fac00
    SUB EBP,ECX                         ; 004fac06
    TEST EDX,EDX                        ; 004fac08
    JZ 0x004fada4                       ; 004fac0a
        ;   XREF to: 004fada4 (CONDITIONAL_JUMP)  ; LAB_004fada4
    PUSH EAX                            ; 004fac10
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fac11
    PUSH EDX                            ; 004fac15
    MOV ECX,dword ptr [ESP + 0x18]      ; 004fac16
    PUSH ECX                            ; 004fac1a
    MOV EAX,[0x0061b498]                ; 004fac1b | DAT_0061b498
    PUSH EBP                            ; 004fac20
    SUB EAX,ESI                         ; 004fac21
    PUSH EAX                            ; 004fac23
    CALL core_inv.cpp_drawItemIconBackground_FUN_004fa930 ; 004fac24
        ;   XREF to: 004fa930 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004fa930(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004fac29
        ;   Label: LAB_004fac29
    MOV ESI,dword ptr [ESP + 0x20]      ; 004fac2c
    PUSH ESI                            ; 004fac30
    PUSH 0x3fc90fdb                     ; 004fac31
    PUSH EDI                            ; 004fac36
    MOV EDI,dword ptr [ESP + 0x18]      ; 004fac37
    PUSH EDI                            ; 004fac3b
    MOV EBP,dword ptr [ESP + 0x10]      ; 004fac3c
    PUSH EBP                            ; 004fac40
    MOV EAX,dword ptr [EBX + 0x338]     ; 004fac41
    PUSH EAX                            ; 004fac47
    PUSH EBX                            ; 004fac48
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 ; 004fac49
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 004fac4e
    CMP dword ptr [EBX + 0x33c],0x0     ; 004fac51
        ;   Label: LAB_004fac51
    JZ 0x004fad69                       ; 004fac58
        ;   XREF to: 004fad69 (CONDITIONAL_JUMP)  ; LAB_004fad69
    FLD float ptr [EBX + 0x344]         ; 004fac5e
    FLDZ                                ; 004fac64
    FCOMPP                              ; 004fac66
    FNSTSW AX                           ; 004fac68
    SAHF                                ; 004fac6a
    JNC 0x004fad69                      ; 004fac6b
        ;   XREF to: 004fad69 (CONDITIONAL_JUMP)  ; LAB_004fad69
    MOV EDX,0x10                        ; 004fac71
    MOV EDI,0x40                        ; 004fac76
    MOV ESI,dword ptr [0x0061f1a0]      ; 004fac7b | DAT_0061f1a0
    MOV EBP,dword ptr [0x0061b49c]      ; 004fac81 | DAT_0061b49c
    MOV ECX,dword ptr [0x0061f1a4]      ; 004fac87 | DAT_0061f1a4
    CMP EBP,0x180                       ; 004fac8d
    JGE 0x004faca2                      ; 004fac93
        ;   XREF to: 004faca2 (CONDITIONAL_JUMP)  ; LAB_004faca2
    CMP dword ptr [EBX + 0x454],0x0     ; 004fac95
    JZ 0x004fadc2                       ; 004fac9c
        ;   XREF to: 004fadc2 (CONDITIONAL_JUMP)  ; LAB_004fadc2
    MOV EAX,[0x0061b498]                ; 004faca2 | DAT_0061b498
        ;   Label: LAB_004faca2
    SUB EAX,EDI                         ; 004faca7
    SUB EAX,EDX                         ; 004faca9
    MOV dword ptr [ESP + 0x8],EAX       ; 004facab
    MOV EAX,[0x0061b49c]                ; 004facaf | DAT_0061b49c
    FLD float ptr [EBX + 0x344]         ; 004facb4
    SUB EAX,EDI                         ; 004facba
    FLD1                                ; 004facbc
    SUB EAX,EDX                         ; 004facbe
    MOV EDX,0xffff                      ; 004facc0
    MOV dword ptr [ESP + 0x4],EAX       ; 004facc5
    MOV dword ptr [ESP + 0x24],EDX      ; 004facc9
    FCOMPP                              ; 004faccd
    FNSTSW AX                           ; 004faccf
    SAHF                                ; 004facd1
    JBE 0x004face9                      ; 004facd2
        ;   XREF to: 004face9 (CONDITIONAL_JUMP)  ; LAB_004face9
    FLD float ptr [EBX + 0x344]         ; 004facd4
    FMUL float ptr [0x005e6890]         ; 004facda | DAT_005e6890
    CALL crt_math.c_round_FUN_005c03a0  ; 004face0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x24]        ; 004face5
    MOV EAX,[0x0061b498]                ; 004face9 | DAT_0061b498
        ;   Label: LAB_004face9
    DEC EAX                             ; 004facee
    MOV dword ptr [ESP + 0x18],EAX      ; 004facef
    MOV EAX,[0x0061b49c]                ; 004facf3 | DAT_0061b49c
    DEC EAX                             ; 004facf8
    MOV EDX,dword ptr [ESP + 0x24]      ; 004facf9
    MOV dword ptr [ESP + 0x1c],EAX      ; 004facfd
    MOV EAX,0x3                         ; 004fad01
    ADD EDX,EDX                         ; 004fad06
    MOV dword ptr [ESP + 0x28],EAX      ; 004fad08
    MOV EAX,EDX                         ; 004fad0c
    SAR EDX,0x1f                        ; 004fad0e
    IDIV dword ptr [ESP + 0x28]         ; 004fad11
    MOV EBP,dword ptr [0x0061b49c]      ; 004fad15 | DAT_0061b49c
    MOV EDX,dword ptr [EBX + 0x454]     ; 004fad1b
    SUB EBP,ECX                         ; 004fad21
    TEST EDX,EDX                        ; 004fad23
    JZ 0x004fadeb                       ; 004fad25
        ;   XREF to: 004fadeb (CONDITIONAL_JUMP)  ; LAB_004fadeb
    PUSH EAX                            ; 004fad2b
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fad2c
    PUSH EDX                            ; 004fad30
    MOV ECX,dword ptr [ESP + 0x20]      ; 004fad31
    PUSH ECX                            ; 004fad35
    MOV EAX,[0x0061b498]                ; 004fad36 | DAT_0061b498
    PUSH EBP                            ; 004fad3b
    SUB EAX,ESI                         ; 004fad3c
    PUSH EAX                            ; 004fad3e
    CALL core_inv.cpp_drawItemIconBackground_FUN_004fa930 ; 004fad3f
        ;   XREF to: 004fa930 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004fa930(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004fad44
        ;   Label: LAB_004fad44
    MOV ESI,dword ptr [ESP + 0x24]      ; 004fad47
    PUSH ESI                            ; 004fad4b
    PUSH 0x0                            ; 004fad4c
    PUSH EDI                            ; 004fad4e
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fad4f
    PUSH EDI                            ; 004fad53
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fad54
    PUSH EBP                            ; 004fad58
    MOV EAX,dword ptr [EBX + 0x33c]     ; 004fad59
    PUSH EAX                            ; 004fad5f
    PUSH EBX                            ; 004fad60
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 ; 004fad61
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 004fad66
    ADD ESP,0x2c                        ; 004fad69
        ;   Label: LAB_004fad69
    POP EBP                             ; 004fad6c
    POP EDI                             ; 004fad6d
    POP ESI                             ; 004fad6e
    POP EBX                             ; 004fad6f
    RET                                 ; 004fad70
    CALL core_inv.cpp_FUN_004f70e0      ; 004fad71
        ;   XREF to: 004f70e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f70e0()
        ;   Label: LAB_004fad71
    JMP 0x004fab35                      ; 004fad76
        ;   XREF to: 004fab35 (UNCONDITIONAL_JUMP)  ; LAB_004fab35
    MOV EDX,ESI                         ; 004fad7b
        ;   Label: LAB_004fad7b
    MOV EAX,ESI                         ; 004fad7d
    SAR EDX,0x1f                        ; 004fad7f
    SUB EAX,EDX                         ; 004fad82
    SAR EAX,0x1                         ; 004fad84
    MOV ESI,EAX                         ; 004fad86
    MOV EDX,ECX                         ; 004fad88
    MOV EAX,ECX                         ; 004fad8a
    SAR EDX,0x1f                        ; 004fad8c
    SUB EAX,EDX                         ; 004fad8f
    SAR EAX,0x1                         ; 004fad91
    MOV EDI,0x28                        ; 004fad93
    MOV ECX,EAX                         ; 004fad98
    MOV EAX,0x4                         ; 004fad9a
    JMP 0x004fab86                      ; 004fad9f
        ;   XREF to: 004fab86 (UNCONDITIONAL_JUMP)  ; LAB_004fab86
    PUSH EAX                            ; 004fada4
        ;   Label: LAB_004fada4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fada5
    PUSH ESI                            ; 004fada9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fadaa
    PUSH EAX                            ; 004fadae
    MOV EAX,[0x0061b498]                ; 004fadaf | DAT_0061b498
    PUSH EBP                            ; 004fadb4
    SUB EAX,ECX                         ; 004fadb5
    PUSH EAX                            ; 004fadb7
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004fa770 ; 004fadb8
        ;   XREF to: 004fa770 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_drawWeaponIconBackground_FUN_004fa770()
    JMP 0x004fac29                      ; 004fadbd
        ;   XREF to: 004fac29 (UNCONDITIONAL_JUMP)  ; LAB_004fac29
    MOV EDX,ESI                         ; 004fadc2
        ;   Label: LAB_004fadc2
    MOV EAX,ESI                         ; 004fadc4
    SAR EDX,0x1f                        ; 004fadc6
    SUB EAX,EDX                         ; 004fadc9
    SAR EAX,0x1                         ; 004fadcb
    MOV ESI,EAX                         ; 004fadcd
    MOV EDX,ECX                         ; 004fadcf
    MOV EAX,ECX                         ; 004fadd1
    SAR EDX,0x1f                        ; 004fadd3
    SUB EAX,EDX                         ; 004fadd6
    SAR EAX,0x1                         ; 004fadd8
    MOV EDI,0x20                        ; 004fadda
    MOV EDX,0x8                         ; 004faddf
    MOV ECX,EAX                         ; 004fade4
    JMP 0x004faca2                      ; 004fade6
        ;   XREF to: 004faca2 (UNCONDITIONAL_JUMP)  ; LAB_004faca2
    PUSH EAX                            ; 004fadeb
        ;   Label: LAB_004fadeb
    MOV ESI,dword ptr [ESP + 0x20]      ; 004fadec
    PUSH ESI                            ; 004fadf0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fadf1
    PUSH EAX                            ; 004fadf5
    MOV EAX,[0x0061b498]                ; 004fadf6 | DAT_0061b498
    PUSH EBP                            ; 004fadfb
    SUB EAX,ECX                         ; 004fadfc
    PUSH EAX                            ; 004fadfe
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004fa770 ; 004fadff
        ;   XREF to: 004fa770 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_drawWeaponIconBackground_FUN_004fa770()
    JMP 0x004fad44                      ; 004fae04
        ;   XREF to: 004fad44 (UNCONDITIONAL_JUMP)  ; LAB_004fad44

