; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_flies_cpp_CFlies_FUN_004cc760(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_flies.cpp_CFlies_process_FUN_004cbf00 at 004cc147
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_flies.cpp_CFlies_FUN_004cc820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc760
        ;   Label: core_flies.cpp_CFlies_FUN_004cc760
    PUSH ESI                            ; 004cc761
    PUSH EDI                            ; 004cc762
    PUSH EBP                            ; 004cc763
    SUB ESP,0x20                        ; 004cc764
    MOV EBP,dword ptr [ESP + 0x34]      ; 004cc767
    MOV EBX,dword ptr [ESP + 0x38]      ; 004cc76b
    LEA EAX,[EBX*0x4 + 0x0]             ; 004cc76f
    SUB EAX,EBX                         ; 004cc776
    SHL EAX,0x2                         ; 004cc778
    ADD EAX,EBX                         ; 004cc77b
    SHL EAX,0x2                         ; 004cc77d
    LEA EBX,[EBP + 0x168]               ; 004cc780
    PUSH 0x0                            ; 004cc786
    ADD EBX,EAX                         ; 004cc788
    LEA EAX,[ESP + 0x4]                 ; 004cc78a
    PUSH EAX                            ; 004cc78e
    PUSH EBP                            ; 004cc78f
    MOV dword ptr [ESP + 0x24],EBX      ; 004cc790
    ADD EBX,0x4                         ; 004cc794
    CALL core_flies.cpp_CFlies_FUN_004cc820 ; 004cc797
        ;   XREF to: 004cc820 (UNCONDITIONAL_CALL)  ; float * core_flies.cpp_CFlies_FUN_004cc820(CFlies * this_ptr)
    ADD ESP,0xc                         ; 004cc79c
    CMP EBX,EAX                         ; 004cc79f
    JNZ 0x004cc808                      ; 004cc7a1
        ;   XREF to: 004cc808 (CONDITIONAL_JUMP)  ; LAB_004cc808
    MOV EDI,dword ptr [ESP + 0x18]      ; 004cc7a3
        ;   Label: LAB_004cc7a3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004cc7a7
    ADD EDI,0x4                         ; 004cc7ab
    ADD EBX,0x10                        ; 004cc7ae
    MOV ESI,EDI                         ; 004cc7b1
    ADD EDI,0x24                        ; 004cc7b3
    PUSH ESI                            ; 004cc7b6
        ;   Label: LAB_004cc7b6
    LEA EAX,[ESP + 0x10]                ; 004cc7b7
    PUSH EAX                            ; 004cc7bb
    PUSH EBP                            ; 004cc7bc
    CALL core_flies.cpp_CFlies_FUN_004cc820 ; 004cc7bd
        ;   XREF to: 004cc820 (UNCONDITIONAL_CALL)  ; float * core_flies.cpp_CFlies_FUN_004cc820(CFlies * this_ptr)
    ADD ESP,0xc                         ; 004cc7c2
    CMP EBX,EAX                         ; 004cc7c5
    JZ 0x004cc7d9                       ; 004cc7c7
        ;   XREF to: 004cc7d9 (CONDITIONAL_JUMP)  ; LAB_004cc7d9
    MOV EDX,dword ptr [EAX]             ; 004cc7c9
    MOV dword ptr [EBX],EDX             ; 004cc7cb
    MOV EDX,dword ptr [EAX + 0x4]       ; 004cc7cd
    MOV dword ptr [EBX + 0x4],EDX       ; 004cc7d0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004cc7d3
    MOV dword ptr [EBX + 0x8],EDX       ; 004cc7d6
    ADD ESI,0xc                         ; 004cc7d9
        ;   Label: LAB_004cc7d9
    ADD EBX,0xc                         ; 004cc7dc
    CMP ESI,EDI                         ; 004cc7df
    JNZ 0x004cc7b6                      ; 004cc7e1
        ;   XREF to: 004cc7b6 (CONDITIONAL_JUMP)  ; LAB_004cc7b6
    PUSH 0x3f800000                     ; 004cc7e3
    PUSH 0x0                            ; 004cc7e8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004cc7ea
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EDX,dword ptr [EAX]             ; 004cc808
        ;   Label: LAB_004cc808
    MOV dword ptr [EBX],EDX             ; 004cc80a
    MOV EDX,dword ptr [EAX + 0x4]       ; 004cc80c
    MOV dword ptr [EBX + 0x4],EDX       ; 004cc80f
    MOV EDX,dword ptr [EAX + 0x8]       ; 004cc812
    MOV dword ptr [EBX + 0x8],EDX       ; 004cc815
    JMP 0x004cc7a3                      ; 004cc818
        ;   XREF to: 004cc7a3 (UNCONDITIONAL_JUMP)  ; LAB_004cc7a3

