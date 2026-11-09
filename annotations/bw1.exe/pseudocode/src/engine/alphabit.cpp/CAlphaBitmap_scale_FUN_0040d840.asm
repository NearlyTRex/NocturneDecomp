; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)
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
;   core_inv.cpp_FUN_004f70e0 at 004f7443
;   core_menu.cpp_FUN_0050cc90 at 0050ccda
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d840
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840
    PUSH ESI                            ; 0040d841
    PUSH EDI                            ; 0040d842
    PUSH EBP                            ; 0040d843
    SUB ESP,0x18                        ; 0040d844
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0040d847
    MOV EAX,dword ptr [ECX + 0xc]       ; 0040d84b
    MOV EDX,EAX                         ; 0040d84e
    MOV EBX,dword ptr [ESP + 0x30]      ; 0040d850
    SAR EDX,0x1f                        ; 0040d854
    IDIV EBX                            ; 0040d857
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d859
    MOV EAX,dword ptr [ECX + 0x10]      ; 0040d85d
    MOV EDX,EAX                         ; 0040d860
    MOV ESI,dword ptr [ESP + 0x34]      ; 0040d862
    SAR EDX,0x1f                        ; 0040d866
    IDIV ESI                            ; 0040d869
    XOR EDI,EDI                         ; 0040d86b
    MOV dword ptr [ESP + 0x14],EDI      ; 0040d86d
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d871
    TEST EAX,EAX                        ; 0040d875
    JLE 0x0040d8f0                      ; 0040d877
        ;   XREF to: 0040d8f0 (CONDITIONAL_JUMP)  ; LAB_0040d8f0
    CMP dword ptr [ESP + 0x8],0x0       ; 0040d87d
        ;   Label: LAB_0040d87d
    JLE 0x0040d8df                      ; 0040d882
        ;   XREF to: 0040d8df (CONDITIONAL_JUMP)  ; LAB_0040d8df
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d884
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040d888
    IMUL EBX,ESI                        ; 0040d88c
    MOV EDX,dword ptr [ESP + 0x30]      ; 0040d88f
    MOV dword ptr [ESP + 0xc],EDX       ; 0040d893
    IMUL EDX,EDX,0x0                    ; 0040d897
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040d89a
    ADD ESI,EBX                         ; 0040d89e
    MOV EAX,EBX                         ; 0040d8a0
    MOV dword ptr [ESP + 0x10],ESI      ; 0040d8a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d8a6
        ;   Label: LAB_0040d8a6
    IMUL EBX,dword ptr [ECX + 0xc]      ; 0040d8aa
    IMUL EBX,dword ptr [ESP + 0x34]     ; 0040d8ae
    LEA ESI,[EBX + EDX*0x1]             ; 0040d8b3
    MOV EBX,dword ptr [ECX]             ; 0040d8b6
    LEA EDI,[EBX + ESI*0x1]             ; 0040d8b8
    ADD EBX,EAX                         ; 0040d8bb
    MOV dword ptr [ESP],EBX             ; 0040d8bd
    MOV BL,byte ptr [EDI]               ; 0040d8c0
    MOV EDI,dword ptr [ESP]             ; 0040d8c2
    MOV byte ptr [EDI],BL               ; 0040d8c5
    MOV EBX,dword ptr [ECX + 0x4]       ; 0040d8c7
    LEA EDI,[EBX + ESI*0x1]             ; 0040d8ca
    LEA ESI,[EBX + EAX*0x1]             ; 0040d8cd
    MOV BL,byte ptr [EDI]               ; 0040d8d0
    INC EAX                             ; 0040d8d2
    MOV byte ptr [ESI],BL               ; 0040d8d3
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d8d5
    ADD EDX,EBP                         ; 0040d8d9
    CMP EAX,EBX                         ; 0040d8db
    JL 0x0040d8a6                       ; 0040d8dd
        ;   XREF to: 0040d8a6 (CONDITIONAL_JUMP)  ; LAB_0040d8a6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040d8df
        ;   Label: LAB_0040d8df
    INC EAX                             ; 0040d8e3
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040d8e4
    MOV dword ptr [ESP + 0x14],EAX      ; 0040d8e8
    CMP EAX,EDX                         ; 0040d8ec
    JL 0x0040d87d                       ; 0040d8ee
        ;   XREF to: 0040d87d (CONDITIONAL_JUMP)  ; LAB_0040d87d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d8f0
        ;   Label: LAB_0040d8f0
    MOV dword ptr [ECX + 0xc],EAX       ; 0040d8f4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d8f7
    MOV dword ptr [ECX + 0x10],EAX      ; 0040d8fb
    ADD ESP,0x18                        ; 0040d8fe
    POP EBP                             ; 0040d901
    POP EDI                             ; 0040d902
    POP ESI                             ; 0040d903
    POP EBX                             ; 0040d904
    RET                                 ; 0040d905

