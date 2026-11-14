; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)
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
;   core_inv.cpp_loadAssets_FUN_004da990 at 004dab72
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee43a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dbd0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0
    PUSH ESI                            ; 0040dbd1
    PUSH EDI                            ; 0040dbd2
    PUSH EBP                            ; 0040dbd3
    SUB ESP,0x18                        ; 0040dbd4
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0040dbd7
    MOV EAX,dword ptr [ECX + 0xc]       ; 0040dbdb
    MOV EDX,EAX                         ; 0040dbde
    MOV EBX,dword ptr [ESP + 0x30]      ; 0040dbe0
    SAR EDX,0x1f                        ; 0040dbe4
    IDIV EBX                            ; 0040dbe7
    MOV dword ptr [ESP + 0x8],EAX       ; 0040dbe9
    MOV EAX,dword ptr [ECX + 0x10]      ; 0040dbed
    MOV EDX,EAX                         ; 0040dbf0
    MOV ESI,dword ptr [ESP + 0x34]      ; 0040dbf2
    SAR EDX,0x1f                        ; 0040dbf6
    IDIV ESI                            ; 0040dbf9
    XOR EDI,EDI                         ; 0040dbfb
    MOV dword ptr [ESP + 0x14],EDI      ; 0040dbfd
    MOV dword ptr [ESP + 0x4],EAX       ; 0040dc01
    TEST EAX,EAX                        ; 0040dc05
    JLE 0x0040dc80                      ; 0040dc07
        ;   XREF to: 0040dc80 (CONDITIONAL_JUMP)  ; LAB_0040dc80
    CMP dword ptr [ESP + 0x8],0x0       ; 0040dc0d
        ;   Label: LAB_0040dc0d
    JLE 0x0040dc6f                      ; 0040dc12
        ;   XREF to: 0040dc6f (CONDITIONAL_JUMP)  ; LAB_0040dc6f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040dc14
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040dc18
    IMUL EBX,ESI                        ; 0040dc1c
    MOV EDX,dword ptr [ESP + 0x30]      ; 0040dc1f
    MOV dword ptr [ESP + 0xc],EDX       ; 0040dc23
    IMUL EDX,EDX,0x0                    ; 0040dc27
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040dc2a
    ADD ESI,EBX                         ; 0040dc2e
    MOV EAX,EBX                         ; 0040dc30
    MOV dword ptr [ESP + 0x10],ESI      ; 0040dc32
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040dc36
        ;   Label: LAB_0040dc36
    IMUL EBX,dword ptr [ECX + 0xc]      ; 0040dc3a
    IMUL EBX,dword ptr [ESP + 0x34]     ; 0040dc3e
    LEA ESI,[EBX + EDX*0x1]             ; 0040dc43
    MOV EBX,dword ptr [ECX]             ; 0040dc46
    LEA EDI,[EBX + ESI*0x1]             ; 0040dc48
    ADD EBX,EAX                         ; 0040dc4b
    MOV dword ptr [ESP],EBX             ; 0040dc4d
    MOV BL,byte ptr [EDI]               ; 0040dc50
    MOV EDI,dword ptr [ESP]             ; 0040dc52
    MOV byte ptr [EDI],BL               ; 0040dc55
    MOV EBX,dword ptr [ECX + 0x4]       ; 0040dc57
    LEA EDI,[EBX + ESI*0x1]             ; 0040dc5a
    LEA ESI,[EBX + EAX*0x1]             ; 0040dc5d
    MOV BL,byte ptr [EDI]               ; 0040dc60
    INC EAX                             ; 0040dc62
    MOV byte ptr [ESI],BL               ; 0040dc63
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040dc65
    ADD EDX,EBP                         ; 0040dc69
    CMP EAX,EBX                         ; 0040dc6b
    JL 0x0040dc36                       ; 0040dc6d
        ;   XREF to: 0040dc36 (CONDITIONAL_JUMP)  ; LAB_0040dc36
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040dc6f
        ;   Label: LAB_0040dc6f
    INC EAX                             ; 0040dc73
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dc74
    MOV dword ptr [ESP + 0x14],EAX      ; 0040dc78
    CMP EAX,EDX                         ; 0040dc7c
    JL 0x0040dc0d                       ; 0040dc7e
        ;   XREF to: 0040dc0d (CONDITIONAL_JUMP)  ; LAB_0040dc0d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040dc80
        ;   Label: LAB_0040dc80
    MOV dword ptr [ECX + 0xc],EAX       ; 0040dc84
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040dc87
    MOV dword ptr [ECX + 0x10],EAX      ; 0040dc8b
    ADD ESP,0x18                        ; 0040dc8e
    POP EBP                             ; 0040dc91
    POP EDI                             ; 0040dc92
    POP ESI                             ; 0040dc93
    POP EBX                             ; 0040dc94
    RET                                 ; 0040dc95

