; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50 at 004fac5a
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004facd0 at 004fad2e
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_004fac90 at 004fac9a
;
; Referenced Globals:
;   undefined4 DAT_005fa1b0
;   undefined4 DAT_005fa1b8
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d17fc0
;   undefined4 DAT_01d17fc4
;   undefined4 DAT_01d17fc8
;   undefined4 DAT_01d17fcc
;   undefined4 DAT_01d17fd0
;   undefined4 DAT_01d17fd4
;   undefined4 DAT_01d17fd8
;   undefined4 DAT_01d18144
;   undefined4 DAT_01d18148
;   undefined4 DAT_01d1814c
;   undefined4 DAT_01d18150
;   ... and 3 more
;
; Called Functions:
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770
;   engine_matrix.c_projectCachedPoint_FUN_004e8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004faa10
        ;   Label: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10
    PUSH ESI                            ; 004faa11
    PUSH EDI                            ; 004faa12
    PUSH EBP                            ; 004faa13
    SUB ESP,0x4                         ; 004faa14
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004faa17
    MOV EAX,dword ptr [EDI + 0x4]       ; 004faa1b
    XOR EBP,EBP                         ; 004faa1e
    MOV [0x01d17fc0],EAX                ; 004faa20 | DAT_01d17fc0
    TEST EAX,EAX                        ; 004faa25
    JLE 0x004faa80                      ; 004faa27
        ;   XREF to: 004faa80 (CONDITIONAL_JUMP)  ; LAB_004faa80
    MOV EDX,0x1d17fc4                   ; 004faa29
    MOV ESI,EDI                         ; 004faa2e
    MOV EBX,dword ptr [ESI + 0x18]      ; 004faa30
        ;   Label: LAB_004faa30
    IMUL EBX,EBX,0x30                   ; 004faa33
    MOV EAX,[0x0060b280]                ; 004faa36 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 004faa3b | DAT_01ba5c50
    ADD ESI,0x4                         ; 004faa3d
    ADD EAX,EBX                         ; 004faa40
    MOV EBX,EDX                         ; 004faa42
    INC EBP                             ; 004faa44
    FILD dword ptr [EAX]                ; 004faa45
    FMUL float ptr [0x005fa1b8]         ; 004faa47 | DAT_005fa1b8
    FSTP float ptr [EBX]                ; 004faa4d | DAT_01d17fc4 | DAT_01d17fd0
    FILD dword ptr [EAX + 0x4]          ; 004faa4f
    FMUL float ptr [0x005fa1b8]         ; 004faa52 | DAT_005fa1b8
    FSTP float ptr [EBX + 0x4]          ; 004faa58 | DAT_01d17fc8 | DAT_01d17fd4
    FILD dword ptr [EAX + 0x8]          ; 004faa5b
    FMUL float ptr [0x005fa1b8]         ; 004faa5e | DAT_005fa1b8
    FSTP float ptr [EBX + 0x8]          ; 004faa64 | DAT_01d17fcc | DAT_01d17fd8
    MOV ECX,dword ptr [EDI + 0x4]       ; 004faa67
    ADD EDX,0xc                         ; 004faa6a
    CMP EBP,ECX                         ; 004faa6d
    JL 0x004faa30                       ; 004faa6f
        ;   XREF to: 004faa30 (CONDITIONAL_JUMP)  ; LAB_004faa30
    LEA EAX,[EAX]                       ; 004faa71
    LEA EDX,[EDX]                       ; 004faa77
    LEA EAX,[EAX]                       ; 004faa7d
    PUSH 0x1d18144                      ; 004faa80 | DAT_01d18144
        ;   Label: LAB_004faa80
    PUSH 0x1d18148                      ; 004faa85 | DAT_01d18148
    MOV EBX,dword ptr [0x01d17fc0]      ; 004faa8a | DAT_01d17fc0
    PUSH EBX                            ; 004faa90
    MOV EAX,dword ptr [ESP + 0x24]      ; 004faa91
    PUSH 0x1d17fc4                      ; 004faa95 | DAT_01d17fc4
    ADD EAX,0x98                        ; 004faa9a
    PUSH EAX                            ; 004faa9f
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770 ; 004faaa0
        ;   XREF to: 004f9770 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770()
    MOV ESI,dword ptr [0x01d18144]      ; 004faaa5 | DAT_01d18144
    ADD ESP,0x14                        ; 004faaab
    CMP ESI,0x3                         ; 004faaae
    JGE 0x004faabd                      ; 004faab1
        ;   XREF to: 004faabd (CONDITIONAL_JUMP)  ; LAB_004faabd
    XOR EAX,EAX                         ; 004faab3
        ;   Label: LAB_004faab3
    ADD ESP,0x4                         ; 004faab5
    POP EBP                             ; 004faab8
    POP EDI                             ; 004faab9
    POP ESI                             ; 004faaba
    POP EBX                             ; 004faabb
    RET                                 ; 004faabc
    PUSH 0x1d17fc0                      ; 004faabd | DAT_01d17fc0
        ;   Label: LAB_004faabd
    PUSH 0x1d17fc4                      ; 004faac2 | DAT_01d17fc4
    PUSH ESI                            ; 004faac7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004faac8
    PUSH 0x1d18148                      ; 004faacc
    ADD EAX,0xa8                        ; 004faad1
    PUSH EAX                            ; 004faad6
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770 ; 004faad7
        ;   XREF to: 004f9770 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770()
    MOV EAX,[0x01d17fc0]                ; 004faadc | DAT_01d17fc0
    ADD ESP,0x14                        ; 004faae1
    CMP EAX,0x3                         ; 004faae4
    JL 0x004faab3                       ; 004faae7
        ;   XREF to: 004faab3 (CONDITIONAL_JUMP)  ; LAB_004faab3
    PUSH 0x1d18144                      ; 004faae9 | DAT_01d18144
    PUSH 0x1d18148                      ; 004faaee
    PUSH EAX                            ; 004faaf3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004faaf4
    PUSH 0x1d17fc4                      ; 004faaf8 | DAT_01d17fc4
    ADD EAX,0xb8                        ; 004faafd
    PUSH EAX                            ; 004fab02
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770 ; 004fab03
        ;   XREF to: 004f9770 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770()
    MOV ECX,dword ptr [0x01d18144]      ; 004fab08 | DAT_01d18144
    ADD ESP,0x14                        ; 004fab0e
    CMP ECX,0x3                         ; 004fab11
    JL 0x004faab3                       ; 004fab14
        ;   XREF to: 004faab3 (CONDITIONAL_JUMP)  ; LAB_004faab3
    PUSH 0x1d17fc0                      ; 004fab16 | DAT_01d17fc0
    PUSH 0x1d17fc4                      ; 004fab1b | DAT_01d17fc4
    PUSH ECX                            ; 004fab20
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fab21
    PUSH 0x1d18148                      ; 004fab25
    ADD EAX,0xc8                        ; 004fab2a
    PUSH EAX                            ; 004fab2f
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770 ; 004fab30
        ;   XREF to: 004f9770 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770()
    MOV ESI,dword ptr [0x01d17fc0]      ; 004fab35 | DAT_01d17fc0
    ADD ESP,0x14                        ; 004fab3b
    CMP ESI,0x3                         ; 004fab3e
    JL 0x004faab3                       ; 004fab41
        ;   XREF to: 004faab3 (CONDITIONAL_JUMP)  ; LAB_004faab3
    PUSH 0x1d18144                      ; 004fab47 | DAT_01d18144
    PUSH 0x1d18148                      ; 004fab4c
    PUSH ESI                            ; 004fab51
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fab52
    PUSH 0x1d17fc4                      ; 004fab56 | DAT_01d17fc4
    ADD EAX,0xd8                        ; 004fab5b
    PUSH EAX                            ; 004fab60
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770 ; 004fab61
        ;   XREF to: 004f9770 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770()
    MOV EAX,[0x01d18144]                ; 004fab66 | DAT_01d18144
    ADD ESP,0x14                        ; 004fab6b
    CMP EAX,0x3                         ; 004fab6e
    JL 0x004faab3                       ; 004fab71
        ;   XREF to: 004faab3 (CONDITIONAL_JUMP)  ; LAB_004faab3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fab77
    MOV dword ptr [EDX + 0xec],EAX      ; 004fab7b
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fab81
    MOV dword ptr [EDX + 0xf0],EAX      ; 004fab84
    MOV EAX,dword ptr [EDI + 0xc]       ; 004fab8a
    MOV dword ptr [EDX + 0xf4],EAX      ; 004fab8d
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fab93
    MOV dword ptr [EDX + 0xf8],EAX      ; 004fab96
    MOV EAX,dword ptr [EDI + 0x14]      ; 004fab9c
    MOV dword ptr [EDX + 0xfc],EAX      ; 004fab9f
    MOV EDX,dword ptr [0x01d18144]      ; 004faba5 | DAT_01d18144
    XOR EBP,EBP                         ; 004fabab
    TEST EDX,EDX                        ; 004fabad
    JLE 0x004fac40                      ; 004fabaf
        ;   XREF to: 004fac40 (CONDITIONAL_JUMP)  ; LAB_004fac40
    MOV EDI,0x1d18148                   ; 004fabb5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fabba
    MOV dword ptr [ESP],EDI             ; 004fabbe
    MOV EDI,0xea000                     ; 004fabc1
    MOV EAX,[0x0060b280]                ; 004fabc6 | DAT_0060b280
        ;   Label: LAB_004fabc6
    MOV EBX,dword ptr [EAX]             ; 004fabcb | DAT_01ba5c50
    MOV EAX,dword ptr [ESP]             ; 004fabcd
    ADD EBX,EDI                         ; 004fabd0
    FLD float ptr [EAX]                 ; 004fabd2 | DAT_01d18148 | DAT_01d18154
    FMUL float ptr [0x005fa1b0]         ; 004fabd4 | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004fabda
    FLD float ptr [EAX + 0x4]           ; 004fabdc | DAT_01d1814c | DAT_01d18158
    FMUL float ptr [0x005fa1b0]         ; 004fabdf | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fabe5
    FLD float ptr [EAX + 0x8]           ; 004fabe8 | DAT_01d18150 | DAT_01d1815c
    FMUL float ptr [0x005fa1b0]         ; 004fabeb | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004fabf1
    MOV EAX,[0x0060b280]                ; 004fabf4 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 004fabf9 | DAT_01ba5c50
    LEA EDX,[EBP + 0x4e00]              ; 004fabfb
    ADD ESI,0x4                         ; 004fac01
    MOV dword ptr [EDI + EAX*0x1 + 0x10],0xffffffff ; 004fac04
    PUSH EDX                            ; 004fac0c
    MOV dword ptr [ESI + 0xfc],EDX      ; 004fac0d
    CALL engine_matrix.c_projectCachedPoint_FUN_004e8e90 ; 004fac13
        ;   XREF to: 004e8e90 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_004e8e90(int cacheIndex)
    ADD ESP,0x4                         ; 004fac18
    INC EBP                             ; 004fac1b
    MOV ECX,dword ptr [ESP]             ; 004fac1c
    ADD EDI,0x30                        ; 004fac1f
    ADD ECX,0xc                         ; 004fac22
    MOV EBX,dword ptr [0x01d18144]      ; 004fac25 | DAT_01d18144
    MOV dword ptr [ESP],ECX             ; 004fac2b
    CMP EBP,EBX                         ; 004fac2e
    JL 0x004fabc6                       ; 004fac30
        ;   XREF to: 004fabc6 (CONDITIONAL_JUMP)  ; LAB_004fabc6
    LEA EAX,[EAX]                       ; 004fac32
    LEA EDX,[EDX]                       ; 004fac38
    MOV EAX,EAX                         ; 004fac3e
    MOV EAX,0x1                         ; 004fac40
        ;   Label: LAB_004fac40
    ADD ESP,0x4                         ; 004fac45
    POP EBP                             ; 004fac48
    POP EDI                             ; 004fac49
    POP ESI                             ; 004fac4a
    POP EBX                             ; 004fac4b
    RET                                 ; 004fac4c

