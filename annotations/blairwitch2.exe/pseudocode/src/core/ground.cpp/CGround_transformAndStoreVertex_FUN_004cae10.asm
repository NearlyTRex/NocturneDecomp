; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004cae10(CGround *this_ptr,int column,int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004caf00 at 004cb2c8
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_0062201c
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622040
;
; Called Functions:
;   core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cae10
        ;   Label: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004cae10
    PUSH ESI                            ; 004cae11
    PUSH EDI                            ; 004cae12
    PUSH EBP                            ; 004cae13
    SUB ESP,0xc                         ; 004cae14
    MOV ESI,dword ptr [ESP + 0x20]      ; 004cae17
    MOV EBP,dword ptr [ESP + 0x24]      ; 004cae1b
    MOV EBX,dword ptr [ESP + 0x28]      ; 004cae1f
    MOV EDX,EBP                         ; 004cae23
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004cae25
    MOV EDI,dword ptr [ESI + 0x10]      ; 004cae28
    SUB EDX,ECX                         ; 004cae2b
    ADD EDX,EDI                         ; 004cae2d
    MOV EAX,dword ptr [ESI + 0x30]      ; 004cae2f
    PUSH EDX                            ; 004cae32
    MOV EDX,EBX                         ; 004cae33
    MOV ECX,dword ptr [ESI + 0x14]      ; 004cae35
    SUB EDX,EAX                         ; 004cae38
    ADD EDX,ECX                         ; 004cae3a
    PUSH EDX                            ; 004cae3c
    PUSH ESI                            ; 004cae3d
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0 ; 004cae3e
        ;   XREF to: 004cadf0 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0(CGround * this_ptr, int column, int row)
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004cae43
    IMUL EDX,EBP                        ; 004cae46
    ADD ESP,0xc                         ; 004cae49
    SHL EDX,0x8                         ; 004cae4c
    MOV dword ptr [ESP],EDX             ; 004cae4f
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004cae52
    IMUL EDX,EBX                        ; 004cae55
    SHL EDX,0x8                         ; 004cae58
    MOV dword ptr [ESP + 0x8],EDX       ; 004cae5b
    MOV EDX,dword ptr [ESI + 0xc]       ; 004cae5f
    MOV ECX,dword ptr [ESI]             ; 004cae62
    AND EBX,EDX                         ; 004cae64
    IMUL EBX,ECX                        ; 004cae66
    LEA EDI,[EAX*0x4 + 0x0]             ; 004cae69
    SUB EDI,EAX                         ; 004cae70
    AND EBP,dword ptr [ESI + 0x8]       ; 004cae72
    LEA EDX,[EBX + EBP*0x1]             ; 004cae75
    MOV EBX,dword ptr [ESI + 0x24]      ; 004cae78
    MOVSX EDX,word ptr [EBX + EDX*0x4]  ; 004cae7b
    MOV EBX,dword ptr [ESI + 0x20]      ; 004cae7f
    IMUL EBX,EDX                        ; 004cae82
    MOV EDX,ESP                         ; 004cae85
    SHL EDI,0x4                         ; 004cae87
    PUSH EDX                            ; 004cae8a
    ADD EDI,0x622014                    ; 004cae8b | DAT_00622014
    PUSH EDI                            ; 004cae91
    MOV dword ptr [ESP + 0xc],EBX       ; 004cae92
    CALL engine_special.cpp_FUN_0055d9ec ; 004cae96
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV dword ptr [EDI + 0x20],0x3fff   ; 004cae9b | DAT_00622034
    MOV dword ptr [EDI + 0x24],0x3fff   ; 004caea2 | DAT_00622038
    ADD ESP,0x8                         ; 004caea9
    MOV EBX,dword ptr [EDI + 0x8]       ; 004caeac | DAT_0062201c
    MOV dword ptr [EDI + 0x28],0x3fff   ; 004caeaf | DAT_0062203c
    TEST EBX,EBX                        ; 004caeb6
    JL 0x004caee2                       ; 004caeb8
        ;   XREF to: 004caee2 (CONDITIONAL_JUMP)  ; LAB_004caee2
    MOV EBP,dword ptr [ESI + 0x1c]      ; 004caeba
    MOV EBX,dword ptr [ESI + 0x10]      ; 004caebd
    IMUL EBX,EBP                        ; 004caec0
    MOV EDX,dword ptr [EDI + 0x8]       ; 004caec3 | DAT_0062201c
    SHL EDX,0x8                         ; 004caec6
    MOV EAX,EDX                         ; 004caec9
    SAR EDX,0x1f                        ; 004caecb
    IDIV EBX                            ; 004caece
    MOV dword ptr [EDI + 0x2c],EAX      ; 004caed0 | DAT_00622040
    CMP EAX,0xffff                      ; 004caed3
    JG 0x004caeeb                       ; 004caed8
        ;   XREF to: 004caeeb (CONDITIONAL_JUMP)  ; LAB_004caeeb
    ADD ESP,0xc                         ; 004caeda
        ;   Label: LAB_004caeda
    POP EBP                             ; 004caedd
    POP EDI                             ; 004caede
    POP ESI                             ; 004caedf
    POP EBX                             ; 004caee0
    RET                                 ; 004caee1
    MOV dword ptr [EDI + 0x2c],0x0      ; 004caee2 | DAT_00622040
        ;   Label: LAB_004caee2
    JMP 0x004caeda                      ; 004caee9
        ;   XREF to: 004caeda (UNCONDITIONAL_JUMP)  ; LAB_004caeda
    MOV dword ptr [EDI + 0x2c],0xffff   ; 004caeeb | DAT_00622040
        ;   Label: LAB_004caeeb
    ADD ESP,0xc                         ; 004caef2
    POP EBP                             ; 004caef5
    POP EDI                             ; 004caef6
    POP ESI                             ; 004caef7
    POP EBX                             ; 004caef8
    RET                                 ; 004caef9

