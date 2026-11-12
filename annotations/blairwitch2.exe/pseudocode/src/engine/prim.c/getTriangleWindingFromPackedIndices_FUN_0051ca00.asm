; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0051ca00(STrianglePackedIndices *triangle)
;
; Parameters:
; STrianglePackedIndices * Stack[0x4]:4   triangle
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720 at 0046c84f
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0 at 0046c204
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_00622024
;   undefined4 DAT_00622028
;   undefined4 DAT_0070ca7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ca00
        ;   Label: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0051ca00
    PUSH ESI                            ; 0051ca01
    PUSH EDI                            ; 0051ca02
    PUSH EBP                            ; 0051ca03
    MOV EBP,ESP                         ; 0051ca04
    SUB ESP,0x14                        ; 0051ca06
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051ca09
    XOR EDX,EDX                         ; 0051ca0c
    MOV DX,word ptr [EBX]               ; 0051ca0e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051ca11
    MOV ECX,0x622014                    ; 0051ca18 | DAT_00622014
    SUB EAX,EDX                         ; 0051ca1d
    XOR EDX,EDX                         ; 0051ca1f
    SHL EAX,0x4                         ; 0051ca21
    MOV DX,word ptr [EBX + 0x2]         ; 0051ca24
    ADD ECX,EAX                         ; 0051ca28
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051ca2a
    SUB EAX,EDX                         ; 0051ca31
    SHL EAX,0x4                         ; 0051ca33
    MOV BX,word ptr [EBX + 0x4]         ; 0051ca36
    ADD EAX,0x622014                    ; 0051ca3a | DAT_00622014
    AND EBX,0xffff                      ; 0051ca3f
    LEA EDX,[EBX*0x4 + 0x0]             ; 0051ca45
    SUB EDX,EBX                         ; 0051ca4c
    SHL EDX,0x4                         ; 0051ca4e
    MOV EBX,dword ptr [0x0070ca7c]      ; 0051ca51 | DAT_0070ca7c
    ADD EDX,0x622014                    ; 0051ca57 | DAT_00622014
    CMP EBX,0x1                         ; 0051ca5d
    JNZ 0x0051caca                      ; 0051ca60
        ;   XREF to: 0051caca (CONDITIONAL_JUMP)  ; LAB_0051caca
    MOV EDI,dword ptr [ECX + 0x10]      ; 0051ca62 | DAT_00622024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051ca65 | DAT_00622024
    SUB EBX,EDI                         ; 0051ca68
    MOV dword ptr [EBP + -0x14],EBX     ; 0051ca6a
    MOV EBX,dword ptr [EAX + 0x14]      ; 0051ca6d | DAT_00622028
    MOV ESI,dword ptr [ECX + 0x14]      ; 0051ca70 | DAT_00622028
    SUB EBX,ESI                         ; 0051ca73
    MOV dword ptr [EBP + -0x10],EBX     ; 0051ca75
    MOV ECX,dword ptr [EDX + 0x10]      ; 0051ca78 | DAT_00622024
    MOV EDI,dword ptr [EAX + 0x10]      ; 0051ca7b | DAT_00622024
    SUB ECX,EDI                         ; 0051ca7e
    MOV dword ptr [EBP + -0xc],ECX      ; 0051ca80
    MOV EDX,dword ptr [EDX + 0x14]      ; 0051ca83 | DAT_00622028
    MOV ECX,dword ptr [EAX + 0x14]      ; 0051ca86 | DAT_00622028
    SUB EDX,ECX                         ; 0051ca89
    MOV dword ptr [EBP + -0x8],EDX      ; 0051ca8b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0051ca8e
        ;   Label: LAB_0051ca8e
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0051ca94
    MOV EBX,EAX                         ; 0051ca9a
    MOV ECX,EDX                         ; 0051ca9c
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0051ca9e
    IMUL dword ptr [EBP + 0xfffffff4]   ; 0051caa4
    SUB EAX,EBX                         ; 0051caaa
    SBB EDX,ECX                         ; 0051caac
    MOV EAX,0x0                         ; 0051caae
    JGE 0x0051caba                      ; 0051cab3
        ;   XREF to: 0051caba (CONDITIONAL_JUMP)  ; LAB_0051caba
    MOV EAX,0x1                         ; 0051cab5
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 0051caba
        ;   Label: LAB_0051caba
    MOV EAX,dword ptr [EBP + -0x4]      ; 0051cac0
    MOV ESP,EBP                         ; 0051cac3
    POP EBP                             ; 0051cac5
    POP EDI                             ; 0051cac6
    POP ESI                             ; 0051cac7
    POP EBX                             ; 0051cac8
    RET                                 ; 0051cac9
    MOV ESI,dword ptr [ECX + 0x10]      ; 0051caca | DAT_00622024
        ;   Label: LAB_0051caca
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051cacd | DAT_00622024
    SUB EBX,ESI                         ; 0051cad0
    MOV dword ptr [EBP + -0xc],EBX      ; 0051cad2
    MOV EBX,dword ptr [EAX + 0x14]      ; 0051cad5 | DAT_00622028
    MOV EDI,dword ptr [ECX + 0x14]      ; 0051cad8 | DAT_00622028
    SUB EBX,EDI                         ; 0051cadb
    MOV dword ptr [EBP + -0x8],EBX      ; 0051cadd
    MOV ECX,dword ptr [EDX + 0x10]      ; 0051cae0 | DAT_00622024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051cae3 | DAT_00622024
    SUB ECX,EBX                         ; 0051cae6
    MOV dword ptr [EBP + -0x14],ECX     ; 0051cae8
    MOV EDX,dword ptr [EDX + 0x14]      ; 0051caeb | DAT_00622028
    MOV ESI,dword ptr [EAX + 0x14]      ; 0051caee | DAT_00622028
    SUB EDX,ESI                         ; 0051caf1
    MOV dword ptr [EBP + -0x10],EDX     ; 0051caf3
    JMP 0x0051ca8e                      ; 0051caf6
        ;   XREF to: 0051ca8e (UNCONDITIONAL_JUMP)  ; LAB_0051ca8e

