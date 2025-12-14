; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   scaleFactorX
; int              Stack[0xc]:4   scaleFactorY
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_inv.cpp_loadInventory_FUN_004fd220 at 004fd421
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00512f8a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410c20
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
    PUSH ESI                            ; 00410c21
    PUSH EDI                            ; 00410c22
    PUSH EBP                            ; 00410c23
    SUB ESP,0x18                        ; 00410c24
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00410c27
    MOV EAX,dword ptr [ECX + 0xc]       ; 00410c2b
    MOV EDX,EAX                         ; 00410c2e
    MOV EBX,dword ptr [ESP + 0x30]      ; 00410c30
    SAR EDX,0x1f                        ; 00410c34
    IDIV EBX                            ; 00410c37
    MOV dword ptr [ESP + 0x8],EAX       ; 00410c39
    MOV EAX,dword ptr [ECX + 0x10]      ; 00410c3d
    MOV EDX,EAX                         ; 00410c40
    MOV ESI,dword ptr [ESP + 0x34]      ; 00410c42
    SAR EDX,0x1f                        ; 00410c46
    IDIV ESI                            ; 00410c49
    XOR EDI,EDI                         ; 00410c4b
    MOV dword ptr [ESP + 0x14],EDI      ; 00410c4d
    MOV dword ptr [ESP + 0x4],EAX       ; 00410c51
    TEST EAX,EAX                        ; 00410c55
    JLE 0x00410cd0                      ; 00410c57
        ;   XREF to: 00410cd0 (CONDITIONAL_JUMP)  ; LAB_00410cd0
    CMP dword ptr [ESP + 0x8],0x0       ; 00410c5d
        ;   Label: LAB_00410c5d
    JLE 0x00410cbf                      ; 00410c62
        ;   XREF to: 00410cbf (CONDITIONAL_JUMP)  ; LAB_00410cbf
    MOV EBX,dword ptr [ESP + 0x14]      ; 00410c64
    MOV ESI,dword ptr [ESP + 0x8]       ; 00410c68
    IMUL EBX,ESI                        ; 00410c6c
    MOV EDX,dword ptr [ESP + 0x30]      ; 00410c6f
    MOV dword ptr [ESP + 0xc],EDX       ; 00410c73
    IMUL EDX,EDX,0x0                    ; 00410c77
    MOV EBP,dword ptr [ESP + 0xc]       ; 00410c7a
    ADD ESI,EBX                         ; 00410c7e
    MOV EAX,EBX                         ; 00410c80
    MOV dword ptr [ESP + 0x10],ESI      ; 00410c82
    MOV EBX,dword ptr [ESP + 0x14]      ; 00410c86
        ;   Label: LAB_00410c86
    IMUL EBX,dword ptr [ECX + 0xc]      ; 00410c8a
    IMUL EBX,dword ptr [ESP + 0x34]     ; 00410c8e
    LEA ESI,[EBX + EDX*0x1]             ; 00410c93
    MOV EBX,dword ptr [ECX]             ; 00410c96
    LEA EDI,[EBX + ESI*0x1]             ; 00410c98
    ADD EBX,EAX                         ; 00410c9b
    MOV dword ptr [ESP],EBX             ; 00410c9d
    MOV BL,byte ptr [EDI]               ; 00410ca0
    MOV EDI,dword ptr [ESP]             ; 00410ca2
    MOV byte ptr [EDI],BL               ; 00410ca5
    MOV EBX,dword ptr [ECX + 0x4]       ; 00410ca7
    LEA EDI,[EBX + ESI*0x1]             ; 00410caa
    LEA ESI,[EBX + EAX*0x1]             ; 00410cad
    MOV BL,byte ptr [EDI]               ; 00410cb0
    INC EAX                             ; 00410cb2
    MOV byte ptr [ESI],BL               ; 00410cb3
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410cb5
    ADD EDX,EBP                         ; 00410cb9
    CMP EAX,EBX                         ; 00410cbb
    JL 0x00410c86                       ; 00410cbd
        ;   XREF to: 00410c86 (CONDITIONAL_JUMP)  ; LAB_00410c86
    MOV EAX,dword ptr [ESP + 0x14]      ; 00410cbf
        ;   Label: LAB_00410cbf
    INC EAX                             ; 00410cc3
    MOV EDX,dword ptr [ESP + 0x4]       ; 00410cc4
    MOV dword ptr [ESP + 0x14],EAX      ; 00410cc8
    CMP EAX,EDX                         ; 00410ccc
    JL 0x00410c5d                       ; 00410cce
        ;   XREF to: 00410c5d (CONDITIONAL_JUMP)  ; LAB_00410c5d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00410cd0
        ;   Label: LAB_00410cd0
    MOV dword ptr [ECX + 0xc],EAX       ; 00410cd4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00410cd7
    MOV dword ptr [ECX + 0x10],EAX      ; 00410cdb
    ADD ESP,0x18                        ; 00410cde
    POP EBP                             ; 00410ce1
    POP EDI                             ; 00410ce2
    POP ESI                             ; 00410ce3
    POP EBX                             ; 00410ce4
    RET                                 ; 00410ce5

