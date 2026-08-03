; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_0042ca90(CChain *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ca90
        ;   Label: core_chain.cpp_CChain_getBoundingBox_FUN_0042ca90
    PUSH ESI                            ; 0042ca91
    PUSH EDI                            ; 0042ca92
    PUSH EBP                            ; 0042ca93
    SUB ESP,0x30                        ; 0042ca94
    MOV ESI,dword ptr [ESP + 0x44]      ; 0042ca97
    MOV EDI,dword ptr [ESP + 0x48]      ; 0042ca9b
    MOV EDX,0x461c3c00                  ; 0042ca9f
    MOV EBP,0xc61c3c00                  ; 0042caa4
    MOV dword ptr [ESP + 0x28],EDX      ; 0042caa9
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042caad
    MOV dword ptr [ESP],EBP             ; 0042cab1
    MOV dword ptr [ESP + 0x4],EBP       ; 0042cab4
    MOV dword ptr [ESP + 0x8],EBP       ; 0042cab8
    MOV dword ptr [ESP + 0x24],EDX      ; 0042cabc
    MOV EBX,EDX                         ; 0042cac0
    MOV ECX,dword ptr [ESI + 0x150]     ; 0042cac2
    XOR EBX,EDX                         ; 0042cac8
    TEST ECX,ECX                        ; 0042caca
    JLE 0x0042cb54                      ; 0042cacc
        ;   XREF to: 0042cb54 (CONDITIONAL_JUMP)  ; LAB_0042cb54
    LEA ECX,[ESI + 0x284]               ; 0042cad2
    FLD float ptr [ECX]                 ; 0042cad8
        ;   Label: LAB_0042cad8
    MOV EDX,ECX                         ; 0042cada
    FCOMP float ptr [ESP + 0x24]        ; 0042cadc
    FNSTSW AX                           ; 0042cae0
    SAHF                                ; 0042cae2
    JNC 0x0042caeb                      ; 0042cae3
        ;   XREF to: 0042caeb (CONDITIONAL_JUMP)  ; LAB_0042caeb
    MOV EAX,dword ptr [ECX]             ; 0042cae5
    MOV dword ptr [ESP + 0x24],EAX      ; 0042cae7
    FLD float ptr [EDX + 0x4]           ; 0042caeb
        ;   Label: LAB_0042caeb
    FCOMP float ptr [ESP + 0x28]        ; 0042caee
    FNSTSW AX                           ; 0042caf2
    SAHF                                ; 0042caf4
    JNC 0x0042cafe                      ; 0042caf5
        ;   XREF to: 0042cafe (CONDITIONAL_JUMP)  ; LAB_0042cafe
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042caf7
    MOV dword ptr [ESP + 0x28],EAX      ; 0042cafa
    FLD float ptr [EDX + 0x8]           ; 0042cafe
        ;   Label: LAB_0042cafe
    FCOMP float ptr [ESP + 0x2c]        ; 0042cb01
    FNSTSW AX                           ; 0042cb05
    SAHF                                ; 0042cb07
    JNC 0x0042cb11                      ; 0042cb08
        ;   XREF to: 0042cb11 (CONDITIONAL_JUMP)  ; LAB_0042cb11
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042cb0a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042cb0d
    FLD float ptr [EDX]                 ; 0042cb11
        ;   Label: LAB_0042cb11
    FCOMP float ptr [ESP]               ; 0042cb13
    FNSTSW AX                           ; 0042cb16
    SAHF                                ; 0042cb18
    JBE 0x0042cb20                      ; 0042cb19
        ;   XREF to: 0042cb20 (CONDITIONAL_JUMP)  ; LAB_0042cb20
    MOV EAX,dword ptr [EDX]             ; 0042cb1b
    MOV dword ptr [ESP],EAX             ; 0042cb1d
    FLD float ptr [EDX + 0x4]           ; 0042cb20
        ;   Label: LAB_0042cb20
    FCOMP float ptr [ESP + 0x4]         ; 0042cb23
    FNSTSW AX                           ; 0042cb27
    SAHF                                ; 0042cb29
    JBE 0x0042cb33                      ; 0042cb2a
        ;   XREF to: 0042cb33 (CONDITIONAL_JUMP)  ; LAB_0042cb33
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042cb2c
    MOV dword ptr [ESP + 0x4],EAX       ; 0042cb2f
    FLD float ptr [EDX + 0x8]           ; 0042cb33
        ;   Label: LAB_0042cb33
    FCOMP float ptr [ESP + 0x8]         ; 0042cb36
    FNSTSW AX                           ; 0042cb3a
    SAHF                                ; 0042cb3c
    JBE 0x0042cb46                      ; 0042cb3d
        ;   XREF to: 0042cb46 (CONDITIONAL_JUMP)  ; LAB_0042cb46
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042cb3f
    MOV dword ptr [ESP + 0x8],EAX       ; 0042cb42
    INC EBX                             ; 0042cb46
        ;   Label: LAB_0042cb46
    MOV EBP,dword ptr [ESI + 0x150]     ; 0042cb47
    ADD ECX,0x24                        ; 0042cb4d
    CMP EBX,EBP                         ; 0042cb50
    JL 0x0042cad8                       ; 0042cb52
        ;   XREF to: 0042cad8 (CONDITIONAL_JUMP)  ; LAB_0042cad8
    LEA EAX,[ESP + 0x24]                ; 0042cb54
        ;   Label: LAB_0042cb54
    PUSH EAX                            ; 0042cb58
    LEA EAX,[ESP + 0x10]                ; 0042cb59
    PUSH EAX                            ; 0042cb5d
    PUSH ESI                            ; 0042cb5e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0042cb5f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0042cb64
    CMP EDI,EAX                         ; 0042cb67
    JZ 0x0042cb7b                       ; 0042cb69
        ;   XREF to: 0042cb7b (CONDITIONAL_JUMP)  ; LAB_0042cb7b
    MOV EDX,dword ptr [EAX]             ; 0042cb6b
    MOV dword ptr [EDI],EDX             ; 0042cb6d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042cb6f
    MOV dword ptr [EDI + 0x4],EDX       ; 0042cb72
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042cb75
    MOV dword ptr [EDI + 0x8],EDX       ; 0042cb78
    MOV EAX,ESP                         ; 0042cb7b
        ;   Label: LAB_0042cb7b
    PUSH EAX                            ; 0042cb7d
    LEA EAX,[ESP + 0x1c]                ; 0042cb7e
    PUSH EAX                            ; 0042cb82
    PUSH ESI                            ; 0042cb83
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0042cb84
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    LEA EDX,[EDI + 0xc]                 ; 0042cb89
    ADD ESP,0xc                         ; 0042cb8c
    CMP EDX,EAX                         ; 0042cb8f
    JNZ 0x0042cb9d                      ; 0042cb91
        ;   XREF to: 0042cb9d (CONDITIONAL_JUMP)  ; LAB_0042cb9d
    MOV EAX,EDI                         ; 0042cb93
    ADD ESP,0x30                        ; 0042cb95
    POP EBP                             ; 0042cb98
    POP EDI                             ; 0042cb99
    POP ESI                             ; 0042cb9a
    POP EBX                             ; 0042cb9b
    RET                                 ; 0042cb9c
    MOV ECX,dword ptr [EAX]             ; 0042cb9d
        ;   Label: LAB_0042cb9d
    MOV dword ptr [EDX],ECX             ; 0042cb9f
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042cba1
    MOV dword ptr [EDX + 0x4],ECX       ; 0042cba4
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042cba7
    MOV dword ptr [EDX + 0x8],ECX       ; 0042cbaa
    MOV EAX,EDI                         ; 0042cbad
    ADD ESP,0x30                        ; 0042cbaf
    POP EBP                             ; 0042cbb2
    POP EDI                             ; 0042cbb3
    POP ESI                             ; 0042cbb4
    POP EBX                             ; 0042cbb5
    RET                                 ; 0042cbb6

