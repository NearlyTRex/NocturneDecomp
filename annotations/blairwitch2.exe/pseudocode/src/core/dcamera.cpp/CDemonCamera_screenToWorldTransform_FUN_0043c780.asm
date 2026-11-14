; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870 at 0043d95f
;   core_dcamera.cpp_FUN_00441ea0 at 00441edb
;   core_dcamera.cpp_FUN_00443610 at 004437f5
;   core_game.cpp_FUN_004b5190 at 004b539e
;   core_game.cpp_FUN_004be8a0 at 004bedcd
;   core_sound.cpp_updateListeners_FUN_00558d50 at 00559222
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c780
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
    PUSH EDI                            ; 0043c781
    PUSH EBP                            ; 0043c782
    SUB ESP,0x1c                        ; 0043c783
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0043c786
    MOV dword ptr [ESP + 0x18],ESI      ; 0043c78a
    MOV ESI,dword ptr [ESP + 0x30]      ; 0043c78e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043c792
    MOV dword ptr [ESP + 0x8],EAX       ; 0043c795
    MOV EAX,dword ptr [ESI]             ; 0043c799
    MOV EDX,dword ptr [EBP + 0x1c8]     ; 0043c79b
    MOV EBX,dword ptr [EBP + 0x1c0]     ; 0043c7a1
    SUB EAX,EDX                         ; 0043c7a7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043c7a9
    LEA EDI,[EBP + 0x19c]               ; 0043c7ad
    IMUL EDX                            ; 0043c7b3
    IDIV EBX                            ; 0043c7b5
    MOV dword ptr [ESP],EAX             ; 0043c7b7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043c7ba
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043c7be
    MOV ECX,dword ptr [EBP + 0x1cc]     ; 0043c7c1
    MOV EBX,dword ptr [EBP + 0x1c4]     ; 0043c7c7
    SUB EAX,ECX                         ; 0043c7cd
    MOV ESI,ESP                         ; 0043c7cf
    IMUL EDX                            ; 0043c7d1
    IDIV EBX                            ; 0043c7d3
    MOV dword ptr [ESP + 0x4],EAX       ; 0043c7d5
    MOV EAX,dword ptr [ESI]             ; 0043c7d9
    IMUL dword ptr [EDI]                ; 0043c7db
    MOV EBX,EAX                         ; 0043c7dd
    MOV ECX,EDX                         ; 0043c7df
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043c7e1
    IMUL dword ptr [EDI + 0xc]          ; 0043c7e4
    ADD EBX,EAX                         ; 0043c7e7
    ADC ECX,EDX                         ; 0043c7e9
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043c7eb
    IMUL dword ptr [EDI + 0x18]         ; 0043c7ee
    ADD EAX,EBX                         ; 0043c7f1
    ADC EDX,ECX                         ; 0043c7f3
    SHRD EAX,EDX,0x10                   ; 0043c7f5
    MOV EBX,dword ptr [EBP + 0x16c]     ; 0043c7f9
    MOV ESI,ESP                         ; 0043c7ff
    ADD EBX,EAX                         ; 0043c801
    LEA EDI,[EBP + 0x1a0]               ; 0043c803
    MOV dword ptr [ESP + 0xc],EBX       ; 0043c809
    MOV EAX,dword ptr [ESI]             ; 0043c80d
    IMUL dword ptr [EDI]                ; 0043c80f
    MOV EBX,EAX                         ; 0043c811
    MOV ECX,EDX                         ; 0043c813
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043c815
    IMUL dword ptr [EDI + 0xc]          ; 0043c818
    ADD EBX,EAX                         ; 0043c81b
    ADC ECX,EDX                         ; 0043c81d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043c81f
    IMUL dword ptr [EDI + 0x18]         ; 0043c822
    ADD EAX,EBX                         ; 0043c825
    ADC EDX,ECX                         ; 0043c827
    SHRD EAX,EDX,0x10                   ; 0043c829
    MOV EBX,dword ptr [EBP + 0x170]     ; 0043c82d
    MOV ESI,ESP                         ; 0043c833
    ADD EBX,EAX                         ; 0043c835
    LEA EDI,[EBP + 0x1a4]               ; 0043c837
    MOV dword ptr [ESP + 0x10],EBX      ; 0043c83d
    MOV EAX,dword ptr [ESI]             ; 0043c841
    IMUL dword ptr [EDI]                ; 0043c843
    MOV EBX,EAX                         ; 0043c845
    MOV ECX,EDX                         ; 0043c847
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043c849
    IMUL dword ptr [EDI + 0xc]          ; 0043c84c
    ADD EBX,EAX                         ; 0043c84f
    ADC ECX,EDX                         ; 0043c851
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043c853
    IMUL dword ptr [EDI + 0x18]         ; 0043c856
    ADD EAX,EBX                         ; 0043c859
    ADC EDX,ECX                         ; 0043c85b
    SHRD EAX,EDX,0x10                   ; 0043c85d
    MOV EBX,dword ptr [EBP + 0x174]     ; 0043c861
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043c867
    ADD EBX,EAX                         ; 0043c86b
    LEA ESI,[ESP + 0xc]                 ; 0043c86d
    MOV dword ptr [ESP + 0x14],EBX      ; 0043c871
    MOVSD ES:EDI,ESI                    ; 0043c875
    MOVSD ES:EDI,ESI                    ; 0043c876
    MOVSD ES:EDI,ESI                    ; 0043c877
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043c878
    ADD ESP,0x1c                        ; 0043c87c
    POP EBP                             ; 0043c87f
    POP EDI                             ; 0043c880
    POP EBX                             ; 0043c881
    RET                                 ; 0043c882

