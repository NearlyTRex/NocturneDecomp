; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(CGround *this_ptr,int column,int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
;
; XREF[1]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10 at 004b1f17
;
; Referenced Globals:
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;
; Called Functions:
;   core_texlist.cpp_CTextureList_captureTexture_FUN_00544db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1d00
        ;   Label: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00
    PUSH ESI                            ; 004b1d01
    PUSH EDI                            ; 004b1d02
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b1d03
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b1d07
    IMUL EAX,dword ptr [EBX]            ; 004b1d0b
    MOV ECX,dword ptr [ESP + 0x14]      ; 004b1d0e
    MOV EDX,dword ptr [EBX + 0x24]      ; 004b1d12
    ADD EAX,ECX                         ; 004b1d15
    MOV AX,word ptr [EDX + EAX*0x4 + 0x2] ; 004b1d17
    AND EAX,0xffff                      ; 004b1d1c
    PUSH EAX                            ; 004b1d21
    MOV ESI,dword ptr [EBX + 0x28]      ; 004b1d22
    PUSH ESI                            ; 004b1d25
    CALL core_texlist.cpp_CTextureList_captureTexture_FUN_00544db0 ; 004b1d26
        ;   XREF to: 00544db0 (UNCONDITIONAL_CALL)  ; void core_texlist.cpp_CTextureList_captureTexture_FUN_00544db0(CTextureList * this_ptr, uint texture_index)
    MOV EDX,dword ptr [EBX + 0x50]      ; 004b1d2b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1d2e
    SUB EAX,EDX                         ; 004b1d35
    SHL EAX,0x4                         ; 004b1d37
    MOV EDI,0xf80000                    ; 004b1d3a
    MOV dword ptr [EAX + 0x5c502c],EDI  ; 004b1d3f | DAT_005c502c
    MOV EDX,dword ptr [EBX + 0x50]      ; 004b1d45
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1d48
    SUB EAX,EDX                         ; 004b1d4f
    SHL EAX,0x4                         ; 004b1d51
    MOV dword ptr [EAX + 0x5c5030],EDI  ; 004b1d54 | DAT_005c5030
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004b1d5a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1d5d
    SUB EAX,EDX                         ; 004b1d64
    SHL EAX,0x4                         ; 004b1d66
    MOV dword ptr [EAX + 0x5c502c],0x80000 ; 004b1d69 | DAT_005c502c
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004b1d73
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1d76
    SUB EAX,EDX                         ; 004b1d7d
    SHL EAX,0x4                         ; 004b1d7f
    MOV dword ptr [EAX + 0x5c5030],EDI  ; 004b1d82 | DAT_005c5030
    MOV EDX,dword ptr [EBX + 0x58]      ; 004b1d88
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1d8b
    SUB EAX,EDX                         ; 004b1d92
    SHL EAX,0x4                         ; 004b1d94
    MOV ESI,0x80000                     ; 004b1d97
    MOV dword ptr [EAX + 0x5c502c],ESI  ; 004b1d9c | DAT_005c502c
    MOV EDX,dword ptr [EBX + 0x58]      ; 004b1da2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1da5
    SUB EAX,EDX                         ; 004b1dac
    SHL EAX,0x4                         ; 004b1dae
    MOV dword ptr [EAX + 0x5c5030],ESI  ; 004b1db1 | DAT_005c5030
    MOV EDX,dword ptr [EBX + 0x54]      ; 004b1db7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1dba
    SUB EAX,EDX                         ; 004b1dc1
    SHL EAX,0x4                         ; 004b1dc3
    MOV dword ptr [EAX + 0x5c502c],EDI  ; 004b1dc6 | DAT_005c502c
    MOV EDX,dword ptr [EBX + 0x54]      ; 004b1dcc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1dcf
    SUB EAX,EDX                         ; 004b1dd6
    SHL EAX,0x4                         ; 004b1dd8
    ADD ESP,0x8                         ; 004b1ddb
    MOV dword ptr [EAX + 0x5c5030],ESI  ; 004b1dde | DAT_005c5030
    POP EDI                             ; 004b1de4
    POP ESI                             ; 004b1de5
    POP EBX                             ; 004b1de6
    RET                                 ; 004b1de7

